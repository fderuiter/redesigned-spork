# Org.OpenAPITools.Model.Query

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | **string** | Unique study key | [optional] 
**SubjectId** | **int** | Mednet subject ID associated with the query (if applicable) | [optional] 
**SubjectOid** | **string** | Client-assigned subject OID (if applicable) | [optional] 
**AnnotationType** | **string** | Category/type of the query (e.g., subject, record, question) | [optional] 
**AnnotationId** | **int** | Unique system identifier for the query | [optional] 
**Type** | **string** | System text identifier for the query type/location (subject, record, question) | [optional] 
**Description** | **string** | Description of the query (e.g., reason or context) | [optional] 
**RecordId** | **int** | Record ID associated with the query (if applicable) | [optional] 
**Variable** | **string** | Variable name (field) associated with the query (if applicable) | [optional] 
**SubjectKey** | **string** | Subject display ID associated with the query (if applicable) | [optional] 
**DateCreated** | **string** | Date when the query was created | [optional] 
**DateModified** | **string** | Date when the query was last modified | [optional] 
**QueryComments** | [**List&lt;QueryComment&gt;**](QueryComment.md) | History of comments/actions on the query | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

