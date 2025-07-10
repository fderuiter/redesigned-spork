# OpenapiClient::Record

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **interval_id** | **Integer** | Interval ID (visit definition) that this record is associated with | [optional] |
| **form_id** | **Integer** | Form ID of the form this record instance belongs to | [optional] |
| **form_key** | **String** | Form key of the form for this record instance | [optional] |
| **site_id** | **Integer** | Site ID associated with the record | [optional] |
| **record_id** | **Integer** | Unique record ID | [optional] |
| **record_oid** | **String** | Client-assigned record OID | [optional] |
| **record_type** | **String** | Type of record (e.g., SUBJECT for subject-related forms) | [optional] |
| **record_status** | **String** | Current status of the record (e.g., Record Incomplete, Record Complete) | [optional] |
| **deleted** | **Boolean** | Whether the record is marked as deleted | [optional] |
| **date_created** | **String** | Date when this record was created | [optional] |
| **date_modified** | **String** | Date when this record was last modified | [optional] |
| **subject_id** | **Integer** | Mednet subject ID that this record is associated with | [optional] |
| **subject_oid** | **String** | Client-assigned subject OID for the subject this record is associated with | [optional] |
| **subject_key** | **String** | Subject display ID that this record is associated with | [optional] |
| **visit_id** | **Integer** | Visit instance ID that this record is associated with (if applicable) | [optional] |
| **parent_record_id** | **Integer** | Record ID of the parent record if this record is a subrecord (if applicable) | [optional] |
| **keywords** | [**Array&lt;Keyword&gt;**](Keyword.md) | List of keywords associated with the record | [optional] |
| **record_data** | **Hash&lt;String, Object&gt;** | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Record.new(
  study_key: null,
  interval_id: null,
  form_id: null,
  form_key: null,
  site_id: null,
  record_id: null,
  record_oid: null,
  record_type: null,
  record_status: null,
  deleted: null,
  date_created: null,
  date_modified: null,
  subject_id: null,
  subject_oid: null,
  subject_key: null,
  visit_id: null,
  parent_record_id: null,
  keywords: null,
  record_data: null
)
```

