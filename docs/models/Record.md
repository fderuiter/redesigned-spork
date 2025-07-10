# Org.OpenAPITools.Model.Record

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | **string** | Unique study key | [optional] 
**IntervalId** | **int** | Interval ID (visit definition) that this record is associated with | [optional] 
**FormId** | **int** | Form ID of the form this record instance belongs to | [optional] 
**FormKey** | **string** | Form key of the form for this record instance | [optional] 
**SiteId** | **int** | Site ID associated with the record | [optional] 
**RecordId** | **int** | Unique record ID | [optional] 
**RecordOid** | **string** | Client-assigned record OID | [optional] 
**RecordType** | **string** | Type of record (e.g., SUBJECT for subject-related forms) | [optional] 
**RecordStatus** | **string** | Current status of the record (e.g., Record Incomplete, Record Complete) | [optional] 
**Deleted** | **bool** | Whether the record is marked as deleted | [optional] 
**DateCreated** | **string** | Date when this record was created | [optional] 
**DateModified** | **string** | Date when this record was last modified | [optional] 
**SubjectId** | **int** | Mednet subject ID that this record is associated with | [optional] 
**SubjectOid** | **string** | Client-assigned subject OID for the subject this record is associated with | [optional] 
**SubjectKey** | **string** | Subject display ID that this record is associated with | [optional] 
**VisitId** | **int** | Visit instance ID that this record is associated with (if applicable) | [optional] 
**ParentRecordId** | **int** | Record ID of the parent record if this record is a subrecord (if applicable) | [optional] 
**Keywords** | [**List&lt;Keyword&gt;**](Keyword.md) | List of keywords associated with the record | [optional] 
**RecordData** | **Dictionary&lt;string, Object&gt;** | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

