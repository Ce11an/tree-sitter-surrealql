.DEFAULT_GOAL := help

.PHONY: help
# See <https://gist.github.com/klmr/575726c7e05d8780505a> for explanation.
help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.PHONY: neovim-highlight
neovim-highlight:
	cp queries/highlights.scm /Users/cellanhall/.local/share/nvim/lazy/nvim-treesitter/queries/surrealql/highlights.scm
