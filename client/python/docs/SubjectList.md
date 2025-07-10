# SubjectList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Subject]**](Subject.md) |  | [optional] 

## Example

```python
from openapi_client.models.subject_list import SubjectList

# TODO update the JSON string below
json = "{}"
# create an instance of SubjectList from a JSON string
subject_list_instance = SubjectList.from_json(json)
# print the JSON string representation of the object
print(SubjectList.to_json())

# convert the object into a dict
subject_list_dict = subject_list_instance.to_dict()
# create an instance of SubjectList from a dict
subject_list_from_dict = SubjectList.from_dict(subject_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


