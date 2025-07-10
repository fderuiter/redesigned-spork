# OpenapiClient::Form

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **form_id** | **Integer** | Mednet Form ID | [optional] |
| **form_key** | **String** | User-defined form key | [optional] |
| **form_name** | **String** | Name of the form (eCRF) | [optional] |
| **form_type** | **String** | Type of the form (e.g., Subject or Site) | [optional] |
| **revision** | **Integer** | Number of modifications (revisions) of the form metadata | [optional] |
| **embedded_log** | **Boolean** | Whether the form has an embedded log | [optional] |
| **enforce_ownership** | **Boolean** | Whether the form enforces record ownership | [optional] |
| **user_agreement** | **Boolean** | Whether the form requires a user agreement | [optional] |
| **subject_record_report** | **Boolean** | Whether the form is marked as a subject record report | [optional] |
| **unscheduled_visit** | **Boolean** | Whether the form is included in unscheduled visits | [optional] |
| **other_forms** | **Boolean** | Whether the form is included in Other Forms category | [optional] |
| **epro_form** | **Boolean** | Whether the form is an ePRO (electronic patient reported outcome) form | [optional] |
| **allow_copy** | **Boolean** | Whether the form allows copying of data | [optional] |
| **disabled** | **Boolean** | Whether the form is soft-deleted (disabled) | [optional] |
| **date_created** | **String** | Date when this form was created | [optional] |
| **date_modified** | **String** | Date when this form was last modified | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Form.new(
  study_key: null,
  form_id: null,
  form_key: null,
  form_name: null,
  form_type: null,
  revision: null,
  embedded_log: null,
  enforce_ownership: null,
  user_agreement: null,
  subject_record_report: null,
  unscheduled_visit: null,
  other_forms: null,
  epro_form: null,
  allow_copy: null,
  disabled: null,
  date_created: null,
  date_modified: null
)
```

