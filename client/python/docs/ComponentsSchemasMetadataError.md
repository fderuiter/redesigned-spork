# ComponentsSchemasMetadataError

Error details if an error occurred

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**message** | **str** | Error message describing the issue | [optional] 

## Example

```python
from openapi_client.models.components_schemas_metadata_error import ComponentsSchemasMetadataError

# TODO update the JSON string below
json = "{}"
# create an instance of ComponentsSchemasMetadataError from a JSON string
components_schemas_metadata_error_instance = ComponentsSchemasMetadataError.from_json(json)
# print the JSON string representation of the object
print(ComponentsSchemasMetadataError.to_json())

# convert the object into a dict
components_schemas_metadata_error_dict = components_schemas_metadata_error_instance.to_dict()
# create an instance of ComponentsSchemasMetadataError from a dict
components_schemas_metadata_error_from_dict = ComponentsSchemasMetadataError.from_dict(components_schemas_metadata_error_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


