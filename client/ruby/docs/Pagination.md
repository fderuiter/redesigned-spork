# OpenapiClient::Pagination

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **current_page** | **Integer** | Current index page returned | [optional] |
| **size** | **Integer** | Number of items per page returned | [optional] |
| **total_pages** | **Integer** | Total number of pages available | [optional] |
| **total_elements** | **Integer** | Total number of elements (items) available | [optional] |
| **sort** | [**Array&lt;Sort&gt;**](Sort.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Pagination.new(
  current_page: null,
  size: null,
  total_pages: null,
  total_elements: null,
  sort: null
)
```

