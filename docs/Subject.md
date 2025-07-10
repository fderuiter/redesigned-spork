# OpenapiClient::Subject

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Unique study key | [optional] |
| **subject_id** | **Integer** | Mednet subject ID (internal numeric ID) | [optional] |
| **subject_oid** | **String** | Client-assigned subject object identifier (OID) | [optional] |
| **subject_key** | **String** | Protocol-assigned subject identifier (display ID) | [optional] |
| **subject_status** | **String** | Current status of the subject (e.g., Enrolled) | [optional] |
| **site_id** | **Integer** | Mednet site ID the subject is associated with | [optional] |
| **site_name** | **String** | Name of the site the subject is associated with | [optional] |
| **deleted** | **Boolean** | Whether the subject is marked as deleted | [optional] |
| **enrollment_start_date** | **String** | Subject’s enrollment start date | [optional] |
| **date_created** | **String** | Date when this subject record was created | [optional] |
| **date_modified** | **String** | Date when this subject record was last modified | [optional] |
| **keywords** | [**Array&lt;Keyword&gt;**](Keyword.md) | List of keywords associated with the subject | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Subject.new(
  study_key: null,
  subject_id: null,
  subject_oid: null,
  subject_key: null,
  subject_status: null,
  site_id: null,
  site_name: null,
  deleted: null,
  enrollment_start_date: null,
  date_created: null,
  date_modified: null,
  keywords: null
)
```

