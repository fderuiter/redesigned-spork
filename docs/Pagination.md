# Pagination


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**current_page** | **int** | Current index page returned | [optional] 
**size** | **int** | Number of items per page returned | [optional] 
**total_pages** | **int** | Total number of pages available | [optional] 
**total_elements** | **int** | Total number of elements (items) available | [optional] 
**sort** | [**List[Sort]**](Sort.md) |  | [optional] 

## Example

```python
from openapi_client.models.pagination import Pagination

# TODO update the JSON string below
json = "{}"
# create an instance of Pagination from a JSON string
pagination_instance = Pagination.from_json(json)
# print the JSON string representation of the object
print(Pagination.to_json())

# convert the object into a dict
pagination_dict = pagination_instance.to_dict()
# create an instance of Pagination from a dict
pagination_from_dict = Pagination.from_dict(pagination_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


