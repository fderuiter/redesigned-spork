# Job


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**job_id** | **str** | Unique job identifier | [optional] 
**batch_id** | **str** | Batch ID associated with the job (useful for linking with record creation requests) | [optional] 
**state** | **str** | State of the job (e.g., completed, pending) | [optional] 
**date_created** | **str** | Timestamp when the job was created | [optional] 
**date_started** | **str** | Timestamp when the job started processing | [optional] 
**date_finished** | **str** | Timestamp when the job finished processing | [optional] 

## Example

```python
from openapi_client.models.job import Job

# TODO update the JSON string below
json = "{}"
# create an instance of Job from a JSON string
job_instance = Job.from_json(json)
# print the JSON string representation of the object
print(Job.to_json())

# convert the object into a dict
job_dict = job_instance.to_dict()
# create an instance of Job from a dict
job_from_dict = Job.from_dict(job_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


