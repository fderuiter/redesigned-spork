# redesigned-spork

This repository hosts OpenAPI specifications for two clinical research platforms.

- **iMednet EDC API**: see `imednet/openapi.yaml` and the accompanying RST documentation under `imednet/api_docs`.

GitHub Actions workflows validate the specifications and can produce client SDKs in several languages using OpenAPI Generator. Another workflow converts the iMednet specification into a Postman collection stored under `imednet/postman/collection.json`.
