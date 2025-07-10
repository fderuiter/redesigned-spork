# Role


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**date_created** | **List[int]** | Timestamp when the role assignment was created (as [year, month, day, hour, minute, second, nanosecond]) | [optional] 
**date_modified** | **List[int]** | Timestamp when the role assignment was last modified | [optional] 
**role_id** | **str** | Unique role ID (UUID) | [optional] 
**community_id** | **int** | Community ID or level associated with the role | [optional] 
**name** | **str** | Name of the role | [optional] 
**description** | **str** | Description of the role | [optional] 
**level** | **int** | Role level or hierarchy | [optional] 
**type** | **str** | Role type/category | [optional] 
**inactive** | **bool** | Whether the role is inactive | [optional] 

## Example

```python
from openapi_client.models.role import Role

# TODO update the JSON string below
json = "{}"
# create an instance of Role from a JSON string
role_instance = Role.from_json(json)
# print the JSON string representation of the object
print(Role.to_json())

# convert the object into a dict
role_dict = role_instance.to_dict()
# create an instance of Role from a dict
role_from_dict = Role.from_dict(role_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


