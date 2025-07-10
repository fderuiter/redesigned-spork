# ComponentsSchemasRecordCreateRequestItem

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_key** | **String** | Form key identifying the eCRF to create or update | 
**form_id** | Option<**i32**> | Form ID identifying the eCRF to create or update (alternative to formKey) | [optional]
**site_name** | Option<**String**> | Name of the site where the record should be created (for new subject registration) | [optional]
**site_id** | Option<**i32**> | Site ID for the record (alternative to siteName) | [optional]
**subject_key** | Option<**String**> | Subject identifier (display ID) for which to create or update the record | [optional]
**subject_id** | Option<**i32**> | Subject ID for which to create or update the record (alternative to subjectKey) | [optional]
**subject_oid** | Option<**String**> | Subject OID for which to create or update the record (alternative to subjectKey) | [optional]
**interval_name** | Option<**String**> | Name of the interval (visit) for a scheduled record update | [optional]
**interval_id** | Option<**i32**> | Interval ID for a scheduled record update (alternative to intervalName) | [optional]
**record_id** | Option<**i32**> | Record ID for updating an existing unscheduled record (if applicable) | [optional]
**record_oid** | Option<**String**> | Record OID for updating an existing unscheduled record (if applicable) | [optional]
**data** | [**std::collections::HashMap<String, serde_json::Value>**](serde_json::Value.md) | Key-value pairs of field names and values for the record data | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


