# Study


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**sponsor_key** | **str** | Sponsor key that this study belongs to | [optional] 
**study_key** | **str** | Unique study key | [optional] 
**study_id** | **int** | Mednet study ID (internal numeric identifier) | [optional] 
**study_name** | **str** | Name of the study | [optional] 
**study_description** | **str** | Description of the study | [optional] 
**study_type** | **str** | Type of study (e.g., STUDY) | [optional] 
**date_created** | **str** | Date when the study record was created | [optional] 
**date_modified** | **str** | Date when the study record was last modified | [optional] 

## Example

```python
from openapi_client.models.study import Study

# TODO update the JSON string below
json = "{}"
# create an instance of Study from a JSON string
study_instance = Study.from_json(json)
# print the JSON string representation of the object
print(Study.to_json())

# convert the object into a dict
study_dict = study_instance.to_dict()
# create an instance of Study from a dict
study_from_dict = Study.from_dict(study_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


