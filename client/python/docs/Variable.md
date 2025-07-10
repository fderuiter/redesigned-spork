# Variable


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**variable_id** | **int** | Mednet variable ID | [optional] 
**variable_type** | **str** | Type of the variable (field type), e.g., RADIO, TEXT, etc. | [optional] 
**variable_name** | **str** | Name of the variable (question text or label) | [optional] 
**sequence** | **int** | Sequence of the variable on the form | [optional] 
**revision** | **int** | Number of modifications of the variable (via form metadata revisions) | [optional] 
**disabled** | **bool** | Whether the variable is marked as disabled (deleted) | [optional] 
**date_created** | **str** | Date when this variable was created | [optional] 
**date_modified** | **str** | Date when this variable was last modified | [optional] 
**form_id** | **int** | ID of the form that this variable belongs to | [optional] 
**variable_oid** | **str** | Client-assigned variable OID | [optional] 
**deleted** | **bool** | Whether the variable is marked as deleted | [optional] 
**form_key** | **str** | Form key of the form that this variable belongs to | [optional] 
**form_name** | **str** | Name of the form that this variable belongs to | [optional] 
**label** | **str** | User-defined identifier (field name) for the variable | [optional] 
**blinded** | **bool** | Whether the variable is flagged as blinded (hidden in certain contexts) | [optional] 

## Example

```python
from openapi_client.models.variable import Variable

# TODO update the JSON string below
json = "{}"
# create an instance of Variable from a JSON string
variable_instance = Variable.from_json(json)
# print the JSON string representation of the object
print(Variable.to_json())

# convert the object into a dict
variable_dict = variable_instance.to_dict()
# create an instance of Variable from a dict
variable_from_dict = Variable.from_dict(variable_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


