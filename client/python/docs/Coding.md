# Coding


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**site_name** | **str** | Name of the site associated with the coded data | [optional] 
**site_id** | **int** | Site ID associated with the coded data | [optional] 
**subject_id** | **int** | Subject ID associated with the coded data | [optional] 
**subject_key** | **str** | Subject key (display ID) associated with the coded data | [optional] 
**form_id** | **int** | Form ID where the coded data originates | [optional] 
**form_name** | **str** | Name of the form where the coded data originates | [optional] 
**form_key** | **str** | Form key where the coded data originates | [optional] 
**revision** | **int** | Revision number of the coding entry | [optional] 
**record_id** | **int** | Record ID associated with the coded data | [optional] 
**variable** | **str** | Variable name (field) that was coded | [optional] 
**value** | **str** | Original value entered that required coding | [optional] 
**coding_id** | **int** | Mednet coding ID | [optional] 
**code** | **str** | Standardized code assigned (e.g., dictionary term) | [optional] 
**coded_by** | **str** | Name of the user who performed the coding | [optional] 
**reason** | **str** | Reason for coding or any notes on changes | [optional] 
**dictionary_name** | **str** | Name of the dictionary used (e.g., MedDRA) | [optional] 
**dictionary_version** | **str** | Version of the dictionary used | [optional] 
**date_coded** | **str** | Date when the coding was performed | [optional] 

## Example

```python
from openapi_client.models.coding import Coding

# TODO update the JSON string below
json = "{}"
# create an instance of Coding from a JSON string
coding_instance = Coding.from_json(json)
# print the JSON string representation of the object
print(Coding.to_json())

# convert the object into a dict
coding_dict = coding_instance.to_dict()
# create an instance of Coding from a dict
coding_from_dict = Coding.from_dict(coding_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


