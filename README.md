# redesigned-spork

[![Validate and Generate SDKs](https://github.com/fderuiter/redesigned-spork/actions/workflows/openapi-generate.yml/badge.svg)](https://github.com/fderuiter/redesigned-spork/actions/workflows/openapi-generate.yml)

This repository hosts OpenAPI specifications for two clinical research platforms.

- **iMednet EDC API**: see `imednet/openapi.yaml` and the accompanying RST documentation under `imednet/api_docs`.
- **Veeva Vault API**: specification generated from the Veeva Vault Postman collection located in `veeva_vault/openapi.yaml`.

GitHub Actions workflows validate the specifications and can produce client SDKs in several languages using OpenAPI Generator. Another workflow converts the iMednet specification into a Postman collection stored under `imednet/postman/collection.json`.

