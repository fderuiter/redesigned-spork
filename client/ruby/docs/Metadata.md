# OpenapiClient::Metadata

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **status** | **String** | HTTP status of the response (e.g., OK or ERROR) | [optional] |
| **method** | **String** | HTTP method of the request | [optional] |
| **path** | **String** | Requested URI path | [optional] |
| **timestamp** | **Time** | Timestamp when response was generated | [optional] |
| **error** | [**ComponentsSchemasMetadataError**](ComponentsSchemasMetadataError.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Metadata.new(
  status: null,
  method: null,
  path: null,
  timestamp: null,
  error: null
)
```

