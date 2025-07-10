# RecordRevision


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**record_revision_id** | **int** | Unique system identifier for the record revision | [optional] 
**record_id** | **int** | Unique system identifier of the related record | [optional] 
**record_oid** | **str** | Client-assigned record OID (if any) | [optional] 
**record_revision** | **int** | Revision number of the record (version of the record status) | [optional] 
**data_revision** | **int** | Revision number of the data within the record | [optional] 
**record_status** | **str** | Status of the record at this revision (user-defined status label) | [optional] 
**subject_id** | **int** | Mednet subject ID related to the record | [optional] 
**subject_oid** | **str** | Client-assigned subject OID related to the record | [optional] 
**subject_key** | **str** | Subject display ID related to the record | [optional] 
**site_id** | **int** | Site ID related to the record | [optional] 
**form_key** | **str** | Form key of the form that the record belongs to | [optional] 
**interval_id** | **int** | Interval ID (visit definition) related to the record | [optional] 
**role** | **str** | Role name of the user who saved the record revision | [optional] 
**user** | **str** | Username of the user who saved the record revision | [optional] 
**reason_for_change** | **str** | Reason for change, if provided (for audit trail) | [optional] 
**deleted** | **bool** | Whether the record was deleted in this revision | [optional] 
**date_created** | **str** | Date when this record revision was created | [optional] 

## Example

```python
from openapi_client.models.record_revision import RecordRevision

# TODO update the JSON string below
json = "{}"
# create an instance of RecordRevision from a JSON string
record_revision_instance = RecordRevision.from_json(json)
# print the JSON string representation of the object
print(RecordRevision.to_json())

# convert the object into a dict
record_revision_dict = record_revision_instance.to_dict()
# create an instance of RecordRevision from a dict
record_revision_from_dict = RecordRevision.from_dict(record_revision_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


