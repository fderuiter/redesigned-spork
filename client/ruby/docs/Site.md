# OpenapiClient::Site

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **site_id** | **Integer** | Unique site ID | [optional] |
| **site_name** | **String** | Name of the site | [optional] |
| **site_enrollment_status** | **String** | Enrollment status of the site | [optional] |
| **date_created** | **String** | Date when this site was created | [optional] |
| **date_modified** | **String** | Date when this site was last modified | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Site.new(
  study_key: null,
  site_id: null,
  site_name: null,
  site_enrollment_status: null,
  date_created: null,
  date_modified: null
)
```

