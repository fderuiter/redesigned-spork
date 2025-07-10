# OpenapiClient::Coding

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **site_name** | **String** | Name of the site associated with the coded data | [optional] |
| **site_id** | **Integer** | Site ID associated with the coded data | [optional] |
| **subject_id** | **Integer** | Subject ID associated with the coded data | [optional] |
| **subject_key** | **String** | Subject key (display ID) associated with the coded data | [optional] |
| **form_id** | **Integer** | Form ID where the coded data originates | [optional] |
| **form_name** | **String** | Name of the form where the coded data originates | [optional] |
| **form_key** | **String** | Form key where the coded data originates | [optional] |
| **revision** | **Integer** | Revision number of the coding entry | [optional] |
| **record_id** | **Integer** | Record ID associated with the coded data | [optional] |
| **variable** | **String** | Variable name (field) that was coded | [optional] |
| **value** | **String** | Original value entered that required coding | [optional] |
| **coding_id** | **Integer** | Mednet coding ID | [optional] |
| **code** | **String** | Standardized code assigned (e.g., dictionary term) | [optional] |
| **coded_by** | **String** | Name of the user who performed the coding | [optional] |
| **reason** | **String** | Reason for coding or any notes on changes | [optional] |
| **dictionary_name** | **String** | Name of the dictionary used (e.g., MedDRA) | [optional] |
| **dictionary_version** | **String** | Version of the dictionary used | [optional] |
| **date_coded** | **String** | Date when the coding was performed | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Coding.new(
  study_key: null,
  site_name: null,
  site_id: null,
  subject_id: null,
  subject_key: null,
  form_id: null,
  form_name: null,
  form_key: null,
  revision: null,
  record_id: null,
  variable: null,
  value: null,
  coding_id: null,
  code: null,
  coded_by: null,
  reason: null,
  dictionary_name: null,
  dictionary_version: null,
  date_coded: null
)
```

