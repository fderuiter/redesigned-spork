# OpenAPI Template Repository

This repository demonstrates how to host an OpenAPI specification and automate
validation, documentation and client generation using GitHub Actions. The
`spec/openapi.yaml` file contains an example API definition that can be
replaced with your own.

## Repository structure

- `spec/openapi.yaml` – example OpenAPI 3.1 specification
- `.github/workflows/` – GitHub Actions for validating the spec and generating
  artifacts

Fork or use this repository as a template when starting a new API project. After
replacing the sample spec with your own, the provided workflows will validate
and publish your API documentation and optional client libraries.

## GitHub Actions overview

The project includes several workflows that run on different branches or after
successful validation. They are intended to show a full pipeline from authoring
a spec to publishing docs.

### `openapi-staging-autofix.yml`

* **Trigger:** Pushes to the `staging` branch or manual invocation.
* **Purpose:** Validates the YAML syntax and automatically adds missing `title`
  fields to schemas. The workflow checks out the `staging` branch, scans the
  spec for schemas without titles (including inline schemas) and writes the
  titles back. If changes are made they are committed directly to the same
  branch. This keeps the specification tidy before merging it into `main`.

### `validate-openapi.yml`

* **Trigger:** Pushes to the `main` branch or manual invocation.
* **Purpose:** Runs the OpenAPI Generator CLI in validation mode to ensure the
  specification is syntactically correct. This job acts as the gate for other
  workflows. When it completes successfully it triggers documentation and client
  generation jobs via the `workflow_run` event.

### `generate-clients.yml`

* **Trigger:** After a successful `validate-openapi.yml` run or manual
  invocation.
* **Purpose:** Uses `openapitools/openapi-generator` to generate API clients for
  several languages (Java, JavaScript, Python, Ruby, R, Rust, Go, C# and C). The
  resulting client code for each language is pushed to a dedicated branch named
  `generated-<language>-client`. You can adjust the language matrix to suit your
  needs.

### `build-docs.yml`

* **Trigger:** After a successful `validate-openapi.yml` run or manual
  invocation.
* **Purpose:** Bundles static HTML documentation using ReDoc and pushes the
  result to the `generated-docs` branch. The workflow also uploads the site as a
  Pages artifact and deploys it using `actions/deploy-pages` so the API docs are
  published with GitHub Pages.

### `deploy-api-docs.yml`

* **Trigger:** Pushes to `main`, after validation succeeds, or manual invocation.
* **Purpose:** Generates ReDoc HTML and deploys it to GitHub Pages, similar to
  `build-docs.yml`, but includes additional setup for the Pages environment and
  concurrency controls. The generated documentation is also kept on the
  `generated-docs` branch. Use this workflow if you want an all-in-one build and
  deploy job on the `main` branch.

## Branch workflow

1. Work on your OpenAPI specification in a feature branch or the `staging`
   branch. When pushing to `staging`, the auto‑fix workflow may commit missing
   titles back for you.
2. Create a pull request targeting `main`. Once merged, the
   `validate-openapi.yml` workflow verifies the spec.
3. After successful validation the documentation and client generation workflows
   run automatically and publish their results.
