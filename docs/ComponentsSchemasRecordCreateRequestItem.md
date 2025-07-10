

# ComponentsSchemasRecordCreateRequestItem


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**formKey** | **String** | Form key identifying the eCRF to create or update |  |
|**formId** | **Integer** | Form ID identifying the eCRF to create or update (alternative to formKey) |  [optional] |
|**siteName** | **String** | Name of the site where the record should be created (for new subject registration) |  [optional] |
|**siteId** | **Integer** | Site ID for the record (alternative to siteName) |  [optional] |
|**subjectKey** | **String** | Subject identifier (display ID) for which to create or update the record |  [optional] |
|**subjectId** | **Integer** | Subject ID for which to create or update the record (alternative to subjectKey) |  [optional] |
|**subjectOid** | **String** | Subject OID for which to create or update the record (alternative to subjectKey) |  [optional] |
|**intervalName** | **String** | Name of the interval (visit) for a scheduled record update |  [optional] |
|**intervalId** | **Integer** | Interval ID for a scheduled record update (alternative to intervalName) |  [optional] |
|**recordId** | **Integer** | Record ID for updating an existing unscheduled record (if applicable) |  [optional] |
|**recordOid** | **String** | Record OID for updating an existing unscheduled record (if applicable) |  [optional] |
|**data** | **Map&lt;String, Object&gt;** | Key-value pairs of field names and values for the record data |  |



