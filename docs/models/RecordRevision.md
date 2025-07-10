# Org.OpenAPITools.Model.RecordRevision

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | **string** | Unique study key | [optional] 
**RecordRevisionId** | **int** | Unique system identifier for the record revision | [optional] 
**RecordId** | **int** | Unique system identifier of the related record | [optional] 
**RecordOid** | **string** | Client-assigned record OID (if any) | [optional] 
**VarRecordRevision** | **int** | Revision number of the record (version of the record status) | [optional] 
**DataRevision** | **int** | Revision number of the data within the record | [optional] 
**RecordStatus** | **string** | Status of the record at this revision (user-defined status label) | [optional] 
**SubjectId** | **int** | Mednet subject ID related to the record | [optional] 
**SubjectOid** | **string** | Client-assigned subject OID related to the record | [optional] 
**SubjectKey** | **string** | Subject display ID related to the record | [optional] 
**SiteId** | **int** | Site ID related to the record | [optional] 
**FormKey** | **string** | Form key of the form that the record belongs to | [optional] 
**IntervalId** | **int** | Interval ID (visit definition) related to the record | [optional] 
**Role** | **string** | Role name of the user who saved the record revision | [optional] 
**User** | **string** | Username of the user who saved the record revision | [optional] 
**ReasonForChange** | **string** | Reason for change, if provided (for audit trail) | [optional] 
**Deleted** | **bool** | Whether the record was deleted in this revision | [optional] 
**DateCreated** | **string** | Date when this record revision was created | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

