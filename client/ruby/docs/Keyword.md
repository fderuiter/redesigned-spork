# OpenapiClient::Keyword

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **keyword_name** | **String** | Name of the keyword | [optional] |
| **keyword_key** | **String** | Key of the keyword (short code) | [optional] |
| **keyword_id** | **Integer** | Internal keyword ID | [optional] |
| **date_added** | **String** | Date when this keyword was added | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Keyword.new(
  keyword_name: null,
  keyword_key: null,
  keyword_id: null,
  date_added: null
)
```

