# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a Tree-sitter grammar for [SurrealQL](https://surrealdb.com/docs/surrealql), the query language for SurrealDB. The project generates parser bindings for multiple languages (C, Go, Node.js, Python, Rust, Swift) from a single JavaScript grammar definition.

The goal of this project is to provide a tree-sitter grammar that can be utilised in editors and IDE's for syntax and formatting. The bindings will also be used to build a SurrealQL LSP server using the tree-sitter grammar.

## Development Commands

When making changes to the grammar.js file make sure to run the following:

- tree-sitter generate
- tree-sitter test
- tree-sitter parse examples/\*_/_.surql

If any of the outputs fail, show the output and let the developer know.

### Core Tree-sitter Commands

- `tree-sitter generate` - Generate parser from grammar.js
- `tree-sitter test` - Run all parser tests
- `tree-sitter parse <file>` - Parse a specific SurrealQL file
- `tree-sitter highlight <file>` - Test syntax highlighting

### npm Scripts

- `npm test` - Generate parser and run tests
- `npm run generate` - Generate parser only
- `npm run format:check` - Check grammar.js formatting
- `npm run format:fix` - Format grammar.js with Prettier

### Make Commands

- `make` - Build C library and bindings
- `make test` - Run tree-sitter tests
- `make clean` - Clean build artifacts

## Architecture

### Grammar Definition

- `grammar.js` - Main grammar definition in Tree-sitter DSL
- Generated files in `src/` (parser.c, grammar.json, node-types.json)

### Language Bindings

- `bindings/c/` - C header and pkg-config
- `bindings/go/` - Go module with tests
- `bindings/node/` - Node.js addon
- `bindings/python/` - Python package
- `bindings/rust/` - Rust crate
- `bindings/swift/` - Swift package

### Testing

- `test/corpus/` - Test cases matching examples in `examples/`
- Each `.txt` file contains test cases with expected parse trees
- Examples in `examples/` show supported SurrealQL syntax

### Queries

- `queries/highlights.scm` - Syntax highlighting rules
- `queries/indents.scm` - Indentation rules
- `queries/folds.scm` - Code folding rules

## Development Workflow

1. Modify grammar rules in `grammar.js`
2. Run `npm run generate` to update parser
3. Add test cases to `test/corpus/` and examples to `examples/`
4. Run `npm test` to verify changes
5. Format with `npm run format:fix` before committing

## File Extensions

- `.surql` - SurrealQL query files
- Grammar supports all SurrealDB statements (SELECT, CREATE, UPDATE, etc.)
