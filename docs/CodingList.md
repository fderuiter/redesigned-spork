# CodingList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Coding]**](Coding.md) |  | [optional] 

## Example

```python
from openapi_client.models.coding_list import CodingList

# TODO update the JSON string below
json = "{}"
# create an instance of CodingList from a JSON string
coding_list_instance = CodingList.from_json(json)
# print the JSON string representation of the object
print(CodingList.to_json())

# convert the object into a dict
coding_list_dict = coding_list_instance.to_dict()
# create an instance of CodingList from a dict
coding_list_from_dict = CodingList.from_dict(coding_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


