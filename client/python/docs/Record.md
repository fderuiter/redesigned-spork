# Record


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**interval_id** | **int** | Interval ID (visit definition) that this record is associated with | [optional] 
**form_id** | **int** | Form ID of the form this record instance belongs to | [optional] 
**form_key** | **str** | Form key of the form for this record instance | [optional] 
**site_id** | **int** | Site ID associated with the record | [optional] 
**record_id** | **int** | Unique record ID | [optional] 
**record_oid** | **str** | Client-assigned record OID | [optional] 
**record_type** | **str** | Type of record (e.g., SUBJECT for subject-related forms) | [optional] 
**record_status** | **str** | Current status of the record (e.g., Record Incomplete, Record Complete) | [optional] 
**deleted** | **bool** | Whether the record is marked as deleted | [optional] 
**date_created** | **str** | Date when this record was created | [optional] 
**date_modified** | **str** | Date when this record was last modified | [optional] 
**subject_id** | **int** | Mednet subject ID that this record is associated with | [optional] 
**subject_oid** | **str** | Client-assigned subject OID for the subject this record is associated with | [optional] 
**subject_key** | **str** | Subject display ID that this record is associated with | [optional] 
**visit_id** | **int** | Visit instance ID that this record is associated with (if applicable) | [optional] 
**parent_record_id** | **int** | Record ID of the parent record if this record is a subrecord (if applicable) | [optional] 
**keywords** | [**List[Keyword]**](Keyword.md) | List of keywords associated with the record | [optional] 
**record_data** | **Dict[str, object]** | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. | [optional] 

## Example

```python
from openapi_client.models.record import Record

# TODO update the JSON string below
json = "{}"
# create an instance of Record from a JSON string
record_instance = Record.from_json(json)
# print the JSON string representation of the object
print(Record.to_json())

# convert the object into a dict
record_dict = record_instance.to_dict()
# create an instance of Record from a dict
record_from_dict = Record.from_dict(record_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


