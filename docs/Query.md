# Query


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**subject_id** | **int** | Mednet subject ID associated with the query (if applicable) | [optional] 
**subject_oid** | **str** | Client-assigned subject OID (if applicable) | [optional] 
**annotation_type** | **str** | Category/type of the query (e.g., subject, record, question) | [optional] 
**annotation_id** | **int** | Unique system identifier for the query | [optional] 
**type** | **str** | System text identifier for the query type/location (subject, record, question) | [optional] 
**description** | **str** | Description of the query (e.g., reason or context) | [optional] 
**record_id** | **int** | Record ID associated with the query (if applicable) | [optional] 
**variable** | **str** | Variable name (field) associated with the query (if applicable) | [optional] 
**subject_key** | **str** | Subject display ID associated with the query (if applicable) | [optional] 
**date_created** | **str** | Date when the query was created | [optional] 
**date_modified** | **str** | Date when the query was last modified | [optional] 
**query_comments** | [**List[QueryComment]**](QueryComment.md) | History of comments/actions on the query | [optional] 

## Example

```python
from openapi_client.models.query import Query

# TODO update the JSON string below
json = "{}"
# create an instance of Query from a JSON string
query_instance = Query.from_json(json)
# print the JSON string representation of the object
print(Query.to_json())

# convert the object into a dict
query_dict = query_instance.to_dict()
# create an instance of Query from a dict
query_from_dict = Query.from_dict(query_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


