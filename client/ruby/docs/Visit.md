# OpenapiClient::Visit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **visit_id** | **Integer** | Unique system identifier for the subject visit instance | [optional] |
| **interval_id** | **Integer** | Unique system identifier of the interval definition for this visit | [optional] |
| **interval_name** | **String** | Name of the interval (visit) for this visit instance | [optional] |
| **subject_id** | **Integer** | Mednet subject ID of the subject | [optional] |
| **subject_key** | **String** | Protocol-assigned subject identifier | [optional] |
| **start_date** | **String** | Start date of the visit window (in YYYY-MM-DD format) | [optional] |
| **end_date** | **String** | End date of the visit window (in YYYY-MM-DD format) | [optional] |
| **due_date** | **String** | Due date of the visit (in YYYY-MM-DD format), if applicable | [optional] |
| **visit_date** | **String** | Actual date the visit took place (in YYYY-MM-DD format) | [optional] |
| **visit_date_form** | **String** | Name of the form used to capture the actual visit date | [optional] |
| **visit_date_question** | **String** | Variable name of the field capturing the actual visit date | [optional] |
| **deleted** | **Boolean** | Whether the visit instance is marked as deleted | [optional] |
| **date_created** | **String** | Date when this visit record was created | [optional] |
| **date_modified** | **String** | Date when this visit record was last modified | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Visit.new(
  study_key: null,
  visit_id: null,
  interval_id: null,
  interval_name: null,
  subject_id: null,
  subject_key: null,
  start_date: null,
  end_date: null,
  due_date: null,
  visit_date: null,
  visit_date_form: null,
  visit_date_question: null,
  deleted: null,
  date_created: null,
  date_modified: null
)
```

