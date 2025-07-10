# OpenapiClient::Study

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sponsor_key** | **String** | Sponsor key that this study belongs to | [optional] |
| **study_key** | **String** | Unique study key | [optional] |
| **study_id** | **Integer** | Mednet study ID (internal numeric identifier) | [optional] |
| **study_name** | **String** | Name of the study | [optional] |
| **study_description** | **String** | Description of the study | [optional] |
| **study_type** | **String** | Type of study (e.g., STUDY) | [optional] |
| **date_created** | **String** | Date when the study record was created | [optional] |
| **date_modified** | **String** | Date when the study record was last modified | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Study.new(
  sponsor_key: null,
  study_key: null,
  study_id: null,
  study_name: null,
  study_description: null,
  study_type: null,
  date_created: null,
  date_modified: null
)
```

