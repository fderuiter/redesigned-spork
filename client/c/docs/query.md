# query_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **char \*** | Unique study key | [optional] 
**subject_id** | **int** | Mednet subject ID associated with the query (if applicable) | [optional] 
**subject_oid** | **char \*** | Client-assigned subject OID (if applicable) | [optional] 
**annotation_type** | **char \*** | Category/type of the query (e.g., subject, record, question) | [optional] 
**annotation_id** | **int** | Unique system identifier for the query | [optional] 
**type** | **char \*** | System text identifier for the query type/location (subject, record, question) | [optional] 
**description** | **char \*** | Description of the query (e.g., reason or context) | [optional] 
**record_id** | **int** | Record ID associated with the query (if applicable) | [optional] 
**variable** | **char \*** | Variable name (field) associated with the query (if applicable) | [optional] 
**subject_key** | **char \*** | Subject display ID associated with the query (if applicable) | [optional] 
**date_created** | **char \*** | Date when the query was created | [optional] 
**date_modified** | **char \*** | Date when the query was last modified | [optional] 
**query_comments** | [**list_t**](query_comment.md) \* | History of comments/actions on the query | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


