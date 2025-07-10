# components_schemas_record_create_request_item_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_key** | **char \*** | Form key identifying the eCRF to create or update | 
**form_id** | **int** | Form ID identifying the eCRF to create or update (alternative to formKey) | [optional] 
**site_name** | **char \*** | Name of the site where the record should be created (for new subject registration) | [optional] 
**site_id** | **int** | Site ID for the record (alternative to siteName) | [optional] 
**subject_key** | **char \*** | Subject identifier (display ID) for which to create or update the record | [optional] 
**subject_id** | **int** | Subject ID for which to create or update the record (alternative to subjectKey) | [optional] 
**subject_oid** | **char \*** | Subject OID for which to create or update the record (alternative to subjectKey) | [optional] 
**interval_name** | **char \*** | Name of the interval (visit) for a scheduled record update | [optional] 
**interval_id** | **int** | Interval ID for a scheduled record update (alternative to intervalName) | [optional] 
**record_id** | **int** | Record ID for updating an existing unscheduled record (if applicable) | [optional] 
**record_oid** | **char \*** | Record OID for updating an existing unscheduled record (if applicable) | [optional] 
**data** | **list_t*** | Key-value pairs of field names and values for the record data | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


