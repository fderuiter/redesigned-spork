# VisitList


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**metadata** | [**Metadata**](Metadata.md) |  | [optional] 
**pagination** | [**Pagination**](Pagination.md) |  | [optional] 
**data** | [**List[Visit]**](Visit.md) |  | [optional] 

## Example

```python
from openapi_client.models.visit_list import VisitList

# TODO update the JSON string below
json = "{}"
# create an instance of VisitList from a JSON string
visit_list_instance = VisitList.from_json(json)
# print the JSON string representation of the object
print(VisitList.to_json())

# convert the object into a dict
visit_list_dict = visit_list_instance.to_dict()
# create an instance of VisitList from a dict
visit_list_from_dict = VisitList.from_dict(visit_list_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


