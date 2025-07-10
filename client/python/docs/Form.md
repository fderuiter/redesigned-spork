# Form


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**form_id** | **int** | Mednet Form ID | [optional] 
**form_key** | **str** | User-defined form key | [optional] 
**form_name** | **str** | Name of the form (eCRF) | [optional] 
**form_type** | **str** | Type of the form (e.g., Subject or Site) | [optional] 
**revision** | **int** | Number of modifications (revisions) of the form metadata | [optional] 
**embedded_log** | **bool** | Whether the form has an embedded log | [optional] 
**enforce_ownership** | **bool** | Whether the form enforces record ownership | [optional] 
**user_agreement** | **bool** | Whether the form requires a user agreement | [optional] 
**subject_record_report** | **bool** | Whether the form is marked as a subject record report | [optional] 
**unscheduled_visit** | **bool** | Whether the form is included in unscheduled visits | [optional] 
**other_forms** | **bool** | Whether the form is included in Other Forms category | [optional] 
**epro_form** | **bool** | Whether the form is an ePRO (electronic patient reported outcome) form | [optional] 
**allow_copy** | **bool** | Whether the form allows copying of data | [optional] 
**disabled** | **bool** | Whether the form is soft-deleted (disabled) | [optional] 
**date_created** | **str** | Date when this form was created | [optional] 
**date_modified** | **str** | Date when this form was last modified | [optional] 

## Example

```python
from openapi_client.models.form import Form

# TODO update the JSON string below
json = "{}"
# create an instance of Form from a JSON string
form_instance = Form.from_json(json)
# print the JSON string representation of the object
print(Form.to_json())

# convert the object into a dict
form_dict = form_instance.to_dict()
# create an instance of Form from a dict
form_from_dict = Form.from_dict(form_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


