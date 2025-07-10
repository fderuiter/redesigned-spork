# QueryComment


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**sequence** | **int** | Sequence number of the comment/action in the query history | [optional] 
**annotation_status** | **str** | Status of the query after this comment (e.g., Open, Closed) | [optional] 
**user** | **str** | Username of the user who made the comment or action | [optional] 
**comment** | **str** | Text of the comment | [optional] 
**closed** | **bool** | Whether the query was marked closed at this step | [optional] 
**var_date** | **str** | Date of the comment or action | [optional] 

## Example

```python
from openapi_client.models.query_comment import QueryComment

# TODO update the JSON string below
json = "{}"
# create an instance of QueryComment from a JSON string
query_comment_instance = QueryComment.from_json(json)
# print the JSON string representation of the object
print(QueryComment.to_json())

# convert the object into a dict
query_comment_dict = query_comment_instance.to_dict()
# create an instance of QueryComment from a dict
query_comment_from_dict = QueryComment.from_dict(query_comment_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


