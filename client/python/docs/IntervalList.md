# IntervalList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Interval]**](Interval.md) |  | [optional] 

## Example

```python
from openapi_client.models.interval_list import IntervalList

# TODO update the JSON string below
json = "{}"
# create an instance of IntervalList from a JSON string
interval_list_instance = IntervalList.from_json(json)
# print the JSON string representation of the object
print(IntervalList.to_json())

# convert the object into a dict
interval_list_dict = interval_list_instance.to_dict()
# create an instance of IntervalList from a dict
interval_list_from_dict = IntervalList.from_dict(interval_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


