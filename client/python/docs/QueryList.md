# QueryList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Query]**](Query.md) |  | [optional] 

## Example

```python
from openapi_client.models.query_list import QueryList

# TODO update the JSON string below
json = "{}"
# create an instance of QueryList from a JSON string
query_list_instance = QueryList.from_json(json)
# print the JSON string representation of the object
print(QueryList.to_json())

# convert the object into a dict
query_list_dict = query_list_instance.to_dict()
# create an instance of QueryList from a dict
query_list_from_dict = QueryList.from_dict(query_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


