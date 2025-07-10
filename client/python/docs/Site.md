# Site


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **str** | Unique study key | [optional] 
**site_id** | **int** | Unique site ID | [optional] 
**site_name** | **str** | Name of the site | [optional] 
**site_enrollment_status** | **str** | Enrollment status of the site | [optional] 
**date_created** | **str** | Date when this site was created | [optional] 
**date_modified** | **str** | Date when this site was last modified | [optional] 

## Example

```python
from openapi_client.models.site import Site

# TODO update the JSON string below
json = "{}"
# create an instance of Site from a JSON string
site_instance = Site.from_json(json)
# print the JSON string representation of the object
print(Site.to_json())

# convert the object into a dict
site_dict = site_instance.to_dict()
# create an instance of Site from a dict
site_from_dict = Site.from_dict(site_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


