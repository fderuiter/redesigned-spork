# VariableList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Variable]**](Variable.md) |  | [optional] 

## Example

```python
from openapi_client.models.variable_list import VariableList

# TODO update the JSON string below
json = "{}"
# create an instance of VariableList from a JSON string
variable_list_instance = VariableList.from_json(json)
# print the JSON string representation of the object
print(VariableList.to_json())

# convert the object into a dict
variable_list_dict = variable_list_instance.to_dict()
# create an instance of VariableList from a dict
variable_list_from_dict = VariableList.from_dict(variable_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


