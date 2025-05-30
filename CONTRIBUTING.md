# CONTRIBUTING.md

## Contributing to LeetCode Solution Silo

Thank you for your interest in improving this repository! To ensure a smooth contribution process, please follow these guidelines:

## How to Contribute

1. **Fork** the repo and create your branch:  

   ```bash
   git checkout -b feature/awesome-problem-name
   ```

2. **Make changes** in a dedicated branch.

3. **Write clear commit messages** following the style:  

   ```text
   <type>: <scope> - <subject>

   <body> (if necessary)

   <footer> (issues, breaking changes)
   ```

   - **Type**: feat, fix, docs, style, refactor, test, chore  
   - **Scope**: file or module affected

4. **Run tests** locally and ensure all pass.
5. **Push** to your fork and open a Pull Request against `main`.
6. **Describe** your changes clearly in the PR description and reference any issues.

## Code Style

- We use **clang-format** (see `.clang-format`).
- Please adhere to the existing formatting rules.
- Pre-commit hooks are configured to run formatting checks.

## Branching & Releases

- Base your PRs off `main`.
- Use descriptive, kebab-case branch names (`feature/new-problem`, `fix/test-crash`).

Thanks for contributing!
