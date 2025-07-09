# redesigned-spork

This repository hosts OpenAPI specifications for two clinical research platforms.

- **iMednet EDC API**: see `imednet/openapi.yaml` and the accompanying RST documentation under `imednet/api_docs`.
- **Veeva Vault API**: specification generated from the Veeva Vault Postman collection located in `veeva_vault/openapi.yaml`.

A GitHub Actions workflow (`.github/workflows/openapi-generate.yml`) validates the specifications and can produce client SDKs in several languages using OpenAPI Generator.

