# ComponentsSchemasIntervalFormsItem


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_id** | **int** | Form ID scheduled in the interval | [optional] 
**form_key** | **str** | Form key scheduled in the interval | [optional] 
**form_name** | **str** | Form name scheduled in the interval | [optional] 

## Example

```python
from openapi_client.models.components_schemas_interval_forms_item import ComponentsSchemasIntervalFormsItem

# TODO update the JSON string below
json = "{}"
# create an instance of ComponentsSchemasIntervalFormsItem from a JSON string
components_schemas_interval_forms_item_instance = ComponentsSchemasIntervalFormsItem.from_json(json)
# print the JSON string representation of the object
print(ComponentsSchemasIntervalFormsItem.to_json())

# convert the object into a dict
components_schemas_interval_forms_item_dict = components_schemas_interval_forms_item_instance.to_dict()
# create an instance of ComponentsSchemasIntervalFormsItem from a dict
components_schemas_interval_forms_item_from_dict = ComponentsSchemasIntervalFormsItem.from_dict(components_schemas_interval_forms_item_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


