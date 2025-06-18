from unittest import TestCase

import tree_sitter_surrealql


class TestLanguage(TestCase):
    def test_can_load_grammar(self) -> None:
        parser = tree_sitter_surrealql.language()
        assert isinstance(parser, int)
