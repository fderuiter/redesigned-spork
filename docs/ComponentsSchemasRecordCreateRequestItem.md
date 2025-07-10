# OpenapiClient::ComponentsSchemasRecordCreateRequestItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **form_key** | **String** | Form key identifying the eCRF to create or update |  |
| **form_id** | **Integer** | Form ID identifying the eCRF to create or update (alternative to formKey) | [optional] |
| **site_name** | **String** | Name of the site where the record should be created (for new subject registration) | [optional] |
| **site_id** | **Integer** | Site ID for the record (alternative to siteName) | [optional] |
| **subject_key** | **String** | Subject identifier (display ID) for which to create or update the record | [optional] |
| **subject_id** | **Integer** | Subject ID for which to create or update the record (alternative to subjectKey) | [optional] |
| **subject_oid** | **String** | Subject OID for which to create or update the record (alternative to subjectKey) | [optional] |
| **interval_name** | **String** | Name of the interval (visit) for a scheduled record update | [optional] |
| **interval_id** | **Integer** | Interval ID for a scheduled record update (alternative to intervalName) | [optional] |
| **record_id** | **Integer** | Record ID for updating an existing unscheduled record (if applicable) | [optional] |
| **record_oid** | **String** | Record OID for updating an existing unscheduled record (if applicable) | [optional] |
| **data** | **Hash&lt;String, Object&gt;** | Key-value pairs of field names and values for the record data |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ComponentsSchemasRecordCreateRequestItem.new(
  form_key: null,
  form_id: null,
  site_name: null,
  site_id: null,
  subject_key: null,
  subject_id: null,
  subject_oid: null,
  interval_name: null,
  interval_id: null,
  record_id: null,
  record_oid: null,
  data: null
)
```

