# OpenapiClient::Role

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **date_created** | **Array&lt;Integer&gt;** | Timestamp when the role assignment was created (as [year, month, day, hour, minute, second, nanosecond]) | [optional] |
| **date_modified** | **Array&lt;Integer&gt;** | Timestamp when the role assignment was last modified | [optional] |
| **role_id** | **String** | Unique role ID (UUID) | [optional] |
| **community_id** | **Integer** | Community ID or level associated with the role | [optional] |
| **name** | **String** | Name of the role | [optional] |
| **description** | **String** | Description of the role | [optional] |
| **level** | **Integer** | Role level or hierarchy | [optional] |
| **type** | **String** | Role type/category | [optional] |
| **inactive** | **Boolean** | Whether the role is inactive | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Role.new(
  date_created: null,
  date_modified: null,
  role_id: null,
  community_id: null,
  name: null,
  description: null,
  level: null,
  type: null,
  inactive: null
)
```

