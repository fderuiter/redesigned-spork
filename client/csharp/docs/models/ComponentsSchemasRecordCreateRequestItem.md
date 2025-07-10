# Org.OpenAPITools.Model.ComponentsSchemasRecordCreateRequestItem

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FormKey** | **string** | Form key identifying the eCRF to create or update | 
**Data** | **Dictionary&lt;string, Object&gt;** | Key-value pairs of field names and values for the record data | 
**FormId** | **int** | Form ID identifying the eCRF to create or update (alternative to formKey) | [optional] 
**SiteName** | **string** | Name of the site where the record should be created (for new subject registration) | [optional] 
**SiteId** | **int** | Site ID for the record (alternative to siteName) | [optional] 
**SubjectKey** | **string** | Subject identifier (display ID) for which to create or update the record | [optional] 
**SubjectId** | **int** | Subject ID for which to create or update the record (alternative to subjectKey) | [optional] 
**SubjectOid** | **string** | Subject OID for which to create or update the record (alternative to subjectKey) | [optional] 
**IntervalName** | **string** | Name of the interval (visit) for a scheduled record update | [optional] 
**IntervalId** | **int** | Interval ID for a scheduled record update (alternative to intervalName) | [optional] 
**RecordId** | **int** | Record ID for updating an existing unscheduled record (if applicable) | [optional] 
**RecordOid** | **string** | Record OID for updating an existing unscheduled record (if applicable) | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

