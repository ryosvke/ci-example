# GitHub/GitLab CI example

## GitHub Actions
GitHub Actions requires workflow files such as those located at `.github/workflows/*.yml`.

This repository has 2 workflow files. (GitHub Actions allows multiple workflow files.)

- `.github/workflows/regression-test.yml`
  - Each time we push to GitHub, GitHub Actions will build and test C and Python code.
- `.github/workflows/shell-success-and-fail.yml`
  - Each time we push to GitHub, GitHub Actions will run shell scripts.

