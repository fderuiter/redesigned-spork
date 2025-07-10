# RecordRevisionList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[RecordRevision]**](RecordRevision.md) |  | [optional] 

## Example

```python
from openapi_client.models.record_revision_list import RecordRevisionList

# TODO update the JSON string below
json = "{}"
# create an instance of RecordRevisionList from a JSON string
record_revision_list_instance = RecordRevisionList.from_json(json)
# print the JSON string representation of the object
print(RecordRevisionList.to_json())

# convert the object into a dict
record_revision_list_dict = record_revision_list_instance.to_dict()
# create an instance of RecordRevisionList from a dict
record_revision_list_from_dict = RecordRevisionList.from_dict(record_revision_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


