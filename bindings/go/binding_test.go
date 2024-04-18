package tree_sitter_surrealql_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-surrealql"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_surrealql.Language())
	if language == nil {
		t.Errorf("Error loading Surrealql grammar")
	}
}
