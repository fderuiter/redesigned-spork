# Visit


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**visit_id** | **int** | Unique system identifier for the subject visit instance | [optional] 
**interval_id** | **int** | Unique system identifier of the interval definition for this visit | [optional] 
**interval_name** | **str** | Name of the interval (visit) for this visit instance | [optional] 
**subject_id** | **int** | Mednet subject ID of the subject | [optional] 
**subject_key** | **str** | Protocol-assigned subject identifier | [optional] 
**start_date** | **str** | Start date of the visit window (in YYYY-MM-DD format) | [optional] 
**end_date** | **str** | End date of the visit window (in YYYY-MM-DD format) | [optional] 
**due_date** | **str** | Due date of the visit (in YYYY-MM-DD format), if applicable | [optional] 
**visit_date** | **str** | Actual date the visit took place (in YYYY-MM-DD format) | [optional] 
**visit_date_form** | **str** | Name of the form used to capture the actual visit date | [optional] 
**visit_date_question** | **str** | Variable name of the field capturing the actual visit date | [optional] 
**deleted** | **bool** | Whether the visit instance is marked as deleted | [optional] 
**date_created** | **str** | Date when this visit record was created | [optional] 
**date_modified** | **str** | Date when this visit record was last modified | [optional] 

## Example

```python
from openapi_client.models.visit import Visit

# TODO update the JSON string below
json = "{}"
# create an instance of Visit from a JSON string
visit_instance = Visit.from_json(json)
# print the JSON string representation of the object
print(Visit.to_json())

# convert the object into a dict
visit_dict = visit_instance.to_dict()
# create an instance of Visit from a dict
visit_from_dict = Visit.from_dict(visit_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


