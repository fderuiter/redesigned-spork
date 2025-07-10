# ComponentsSchemasRecordCreateRequestItem


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**form_key** | **str** | Form key identifying the eCRF to create or update | 
**form_id** | **int** | Form ID identifying the eCRF to create or update (alternative to formKey) | [optional] 
**site_name** | **str** | Name of the site where the record should be created (for new subject registration) | [optional] 
**site_id** | **int** | Site ID for the record (alternative to siteName) | [optional] 
**subject_key** | **str** | Subject identifier (display ID) for which to create or update the record | [optional] 
**subject_id** | **int** | Subject ID for which to create or update the record (alternative to subjectKey) | [optional] 
**subject_oid** | **str** | Subject OID for which to create or update the record (alternative to subjectKey) | [optional] 
**interval_name** | **str** | Name of the interval (visit) for a scheduled record update | [optional] 
**interval_id** | **int** | Interval ID for a scheduled record update (alternative to intervalName) | [optional] 
**record_id** | **int** | Record ID for updating an existing unscheduled record (if applicable) | [optional] 
**record_oid** | **str** | Record OID for updating an existing unscheduled record (if applicable) | [optional] 
**data** | **Dict[str, object]** | Key-value pairs of field names and values for the record data | 

## Example

```python
from openapi_client.models.components_schemas_record_create_request_item import ComponentsSchemasRecordCreateRequestItem

# TODO update the JSON string below
json = "{}"
# create an instance of ComponentsSchemasRecordCreateRequestItem from a JSON string
components_schemas_record_create_request_item_instance = ComponentsSchemasRecordCreateRequestItem.from_json(json)
# print the JSON string representation of the object
print(ComponentsSchemasRecordCreateRequestItem.to_json())

# convert the object into a dict
components_schemas_record_create_request_item_dict = components_schemas_record_create_request_item_instance.to_dict()
# create an instance of ComponentsSchemasRecordCreateRequestItem from a dict
components_schemas_record_create_request_item_from_dict = ComponentsSchemasRecordCreateRequestItem.from_dict(components_schemas_record_create_request_item_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


