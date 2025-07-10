# Subject


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**subject_id** | **int** | Mednet subject ID (internal numeric ID) | [optional] 
**subject_oid** | **str** | Client-assigned subject object identifier (OID) | [optional] 
**subject_key** | **str** | Protocol-assigned subject identifier (display ID) | [optional] 
**subject_status** | **str** | Current status of the subject (e.g., Enrolled) | [optional] 
**site_id** | **int** | Mednet site ID the subject is associated with | [optional] 
**site_name** | **str** | Name of the site the subject is associated with | [optional] 
**deleted** | **bool** | Whether the subject is marked as deleted | [optional] 
**enrollment_start_date** | **str** | Subject’s enrollment start date | [optional] 
**date_created** | **str** | Date when this subject record was created | [optional] 
**date_modified** | **str** | Date when this subject record was last modified | [optional] 
**keywords** | [**List[Keyword]**](Keyword.md) | List of keywords associated with the subject | [optional] 

## Example

```python
from openapi_client.models.subject import Subject

# TODO update the JSON string below
json = "{}"
# create an instance of Subject from a JSON string
subject_instance = Subject.from_json(json)
# print the JSON string representation of the object
print(Subject.to_json())

# convert the object into a dict
subject_dict = subject_instance.to_dict()
# create an instance of Subject from a dict
subject_from_dict = Subject.from_dict(subject_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


