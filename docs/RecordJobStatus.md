# RecordJobStatus


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**job_id** | **str** | Unique job identifier | [optional] 
**batch_id** | **str** | Batch ID used to track the job (identical to jobId in most cases) | [optional] 
**state** | **str** | Current state of the job (e.g., created, completed) | [optional] 

## Example

```python
from openapi_client.models.record_job_status import RecordJobStatus

# TODO update the JSON string below
json = "{}"
# create an instance of RecordJobStatus from a JSON string
record_job_status_instance = RecordJobStatus.from_json(json)
# print the JSON string representation of the object
print(RecordJobStatus.to_json())

# convert the object into a dict
record_job_status_dict = record_job_status_instance.to_dict()
# create an instance of RecordJobStatus from a dict
record_job_status_from_dict = RecordJobStatus.from_dict(record_job_status_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


