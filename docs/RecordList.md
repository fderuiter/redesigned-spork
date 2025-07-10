# RecordList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Record]**](Record.md) |  | [optional] 

## Example

```python
from openapi_client.models.record_list import RecordList

# TODO update the JSON string below
json = "{}"
# create an instance of RecordList from a JSON string
record_list_instance = RecordList.from_json(json)
# print the JSON string representation of the object
print(RecordList.to_json())

# convert the object into a dict
record_list_dict = record_list_instance.to_dict()
# create an instance of RecordList from a dict
record_list_from_dict = RecordList.from_dict(record_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


