# Interval


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**interval_id** | **int** | Unique system identifier for the interval (visit definition) | [optional] 
**interval_name** | **str** | Name of the interval (visit) as defined in the study | [optional] 
**interval_description** | **str** | Description of the interval (visit) | [optional] 
**interval_sequence** | **int** | Sequence number of the interval in the schedule | [optional] 
**interval_group_id** | **int** | Identifier for the interval group (if intervals are grouped) | [optional] 
**interval_group_name** | **str** | Name of the interval group | [optional] 
**timeline** | **str** | Type of interval visit window (e.g., None, Due Date, Start - End Date, Actual Date) | [optional] 
**defined_using_interval** | **str** | Baseline interval used for calculating this interval’s dates | [optional] 
**window_calculation_form** | **str** | Baseline form (name) from which the calculation date is taken | [optional] 
**window_calculation_date** | **str** | Baseline field (variable name) from which the calculation date is taken | [optional] 
**actual_date_form** | **str** | Form used to capture the actual date for this interval | [optional] 
**actual_date** | **str** | Field (variable name) used to capture the actual date for this interval | [optional] 
**due_date_will_be_in** | **int** | Number of days from the calculation date when the interval is due | [optional] 
**negative_slack** | **int** | Number of days before the due date that are allowed (negative window) | [optional] 
**positive_slack** | **int** | Number of days after the due date that are allowed (positive window) | [optional] 
**epro_grace_period** | **int** | Number of days of grace period for ePRO completion after due date | [optional] 
**forms** | [**List[ComponentsSchemasIntervalFormsItem]**](ComponentsSchemasIntervalFormsItem.md) | List of forms that are scheduled in this interval | [optional] 
**disabled** | **bool** | Whether the interval is soft-deleted (disabled) | [optional] 
**date_created** | **str** | Date when this interval was created | [optional] 
**date_modified** | **str** | Date when this interval was last modified | [optional] 

## Example

```python
from openapi_client.models.interval import Interval

# TODO update the JSON string below
json = "{}"
# create an instance of Interval from a JSON string
interval_instance = Interval.from_json(json)
# print the JSON string representation of the object
print(Interval.to_json())

# convert the object into a dict
interval_dict = interval_instance.to_dict()
# create an instance of Interval from a dict
interval_from_dict = Interval.from_dict(interval_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


