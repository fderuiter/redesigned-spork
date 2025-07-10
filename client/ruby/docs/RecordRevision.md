# OpenapiClient::RecordRevision

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **record_revision_id** | **Integer** | Unique system identifier for the record revision | [optional] |
| **record_id** | **Integer** | Unique system identifier of the related record | [optional] |
| **record_oid** | **String** | Client-assigned record OID (if any) | [optional] |
| **record_revision** | **Integer** | Revision number of the record (version of the record status) | [optional] |
| **data_revision** | **Integer** | Revision number of the data within the record | [optional] |
| **record_status** | **String** | Status of the record at this revision (user-defined status label) | [optional] |
| **subject_id** | **Integer** | Mednet subject ID related to the record | [optional] |
| **subject_oid** | **String** | Client-assigned subject OID related to the record | [optional] |
| **subject_key** | **String** | Subject display ID related to the record | [optional] |
| **site_id** | **Integer** | Site ID related to the record | [optional] |
| **form_key** | **String** | Form key of the form that the record belongs to | [optional] |
| **interval_id** | **Integer** | Interval ID (visit definition) related to the record | [optional] |
| **role** | **String** | Role name of the user who saved the record revision | [optional] |
| **user** | **String** | Username of the user who saved the record revision | [optional] |
| **reason_for_change** | **String** | Reason for change, if provided (for audit trail) | [optional] |
| **deleted** | **Boolean** | Whether the record was deleted in this revision | [optional] |
| **date_created** | **String** | Date when this record revision was created | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RecordRevision.new(
  study_key: null,
  record_revision_id: null,
  record_id: null,
  record_oid: null,
  record_revision: null,
  data_revision: null,
  record_status: null,
  subject_id: null,
  subject_oid: null,
  subject_key: null,
  site_id: null,
  form_key: null,
  interval_id: null,
  role: null,
  user: null,
  reason_for_change: null,
  deleted: null,
  date_created: null
)
```

