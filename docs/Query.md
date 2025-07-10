# Query

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | Option<**String**> | Unique study key | [optional]
**subject_id** | Option<**i32**> | Mednet subject ID associated with the query (if applicable) | [optional]
**subject_oid** | Option<**String**> | Client-assigned subject OID (if applicable) | [optional]
**annotation_type** | Option<**String**> | Category/type of the query (e.g., subject, record, question) | [optional]
**annotation_id** | Option<**i32**> | Unique system identifier for the query | [optional]
**r#type** | Option<**String**> | System text identifier for the query type/location (subject, record, question) | [optional]
**description** | Option<**String**> | Description of the query (e.g., reason or context) | [optional]
**record_id** | Option<**i32**> | Record ID associated with the query (if applicable) | [optional]
**variable** | Option<**String**> | Variable name (field) associated with the query (if applicable) | [optional]
**subject_key** | Option<**String**> | Subject display ID associated with the query (if applicable) | [optional]
**date_created** | Option<**String**> | Date when the query was created | [optional]
**date_modified** | Option<**String**> | Date when the query was last modified | [optional]
**query_comments** | Option<[**Vec<models::QueryComment>**](QueryComment.md)> | History of comments/actions on the query | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


