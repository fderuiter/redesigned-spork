# OpenapiClient::User

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **user_id** | **String** | Unique user ID (UUID) | [optional] |
| **login** | **String** | User login name | [optional] |
| **first_name** | **String** | User first name | [optional] |
| **last_name** | **String** | User last name | [optional] |
| **email** | **String** | User email address | [optional] |
| **user_active_in_study** | **Boolean** | Whether the user is active in the given study | [optional] |
| **roles** | [**Array&lt;Role&gt;**](Role.md) | Roles that the user has in the study | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::User.new(
  user_id: null,
  login: null,
  first_name: null,
  last_name: null,
  email: null,
  user_active_in_study: null,
  roles: null
)
```

