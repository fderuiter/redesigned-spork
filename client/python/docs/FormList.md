# FormList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Form]**](Form.md) |  | [optional] 

## Example

```python
from openapi_client.models.form_list import FormList

# TODO update the JSON string below
json = "{}"
# create an instance of FormList from a JSON string
form_list_instance = FormList.from_json(json)
# print the JSON string representation of the object
print(FormList.to_json())

# convert the object into a dict
form_list_dict = form_list_instance.to_dict()
# create an instance of FormList from a dict
form_list_from_dict = FormList.from_dict(form_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


