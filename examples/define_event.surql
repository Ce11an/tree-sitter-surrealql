-- Create a new event whenever a user changes their email address
-- One-statement event
DEFINE EVENT OVERWRITE test ON TABLE user WHEN $before.email != $after.email THEN (
    CREATE log SET 
        user       = $value.id,
        // Turn events like "CREATE" into string "email created"
        action     = 'email' + ' ' + $event.lowercase() + 'd',
        // `email` field may be NONE, log as '' if so
        old_email  = $before.email ?? '',
        new_email  = $after.email  ?? '',
        at         = time::now()
);

-- Complex event statement
DEFINE EVENT purchase_made ON TABLE purchase
    WHEN $before == NONE
    THEN {
        LET $customer = (SELECT * FROM customer WHERE id = $after.customer);
        LET $product = (SELECT * FROM product WHERE id = $after.product);

        RELATE $customer->bought->$product CONTENT {
            quantity: $after.quantity,
            total: $after.total,
            status: 'Pending'
        };

        CREATE log SET
            customer_id = $after.customer,
            product_id = $after.product,
            action = 'purchase_created',
            timestamp = time::now();
    };

-- CREATE event is triggered when a new record is inserted into the table.
-- Here we are updating the status of the post to PUBLISHED
-- when a new record is inserted into the publish_post table.
DEFINE EVENT publish_post ON TABLE publish_post
    WHEN $event = "CREATE"
    THEN (
        UPDATE post SET status = "PUBLISHED" WHERE id = $after.post_id
    );

-- UPDATE event
-- Here we are creating a notification when a user is updated.
DEFINE EVENT user_updated ON TABLE user
    WHEN $event = "UPDATE"
    THEN (
        CREATE notification SET message = "User updated", user_id = $after.id, created_at = time::now()
    );

-- DELETE event is triggered when a record is deleted from the table.
-- Here we are creating a notification when a user is deleted.
DEFINE EVENT user_deleted ON TABLE user
    WHEN $event = "DELETE"
    THEN (
        CREATE notification SET message = "User deleted", user_id = $before.id, created_at = time::now()
    );

-- You can combine multiple events based on your use cases.
-- Here we are creating a log when a user is created, updated or deleted.
DEFINE EVENT user_event ON TABLE user
    WHEN $event = "CREATE" OR $event = "UPDATE" OR $event = "DELETE"
    THEN (
        CREATE log SET
            table = "user",
            event = $event,
            happened_at = time::now()
    );

-- Create a EVENT if it does not already exist
DEFINE EVENT IF NOT EXISTS example ON example THEN {};

-- Create an EVENT and overwrite if it already exists
DEFINE EVENT OVERWRITE example ON example THEN {};

-- Event and permissions
CREATE comment SET
    post = post:tomatosoup,
    content = "So delicious!",
    author = $auth.id;

DEFINE EVENT on_comment_created ON TABLE comment
    WHEN $event = "CREATE"
    THEN {
        -- Check if the post allows for adding comments.
        -- User record doesn't have access to the `post` table.
        IF $after.post.disable_comments {
            THROW "Can't create a comment - Comments are disabled for this post";
        };

        -- Set the `approved` field on the new comment - automatically approve
        -- comments made by the author of the post.
        -- For security reasons, record users don't have any permissions for the `approved` field.
        UPDATE $after.id SET
            approved = $after.post.author == $after.author;
    };
