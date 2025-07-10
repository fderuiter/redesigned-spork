# Keyword


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**keyword_name** | **str** | Name of the keyword | [optional] 
**keyword_key** | **str** | Key of the keyword (short code) | [optional] 
**keyword_id** | **int** | Internal keyword ID | [optional] 
**date_added** | **str** | Date when this keyword was added | [optional] 

## Example

```python
from openapi_client.models.keyword import Keyword

# TODO update the JSON string below
json = "{}"
# create an instance of Keyword from a JSON string
keyword_instance = Keyword.from_json(json)
# print the JSON string representation of the object
print(Keyword.to_json())

# convert the object into a dict
keyword_dict = keyword_instance.to_dict()
# create an instance of Keyword from a dict
keyword_from_dict = Keyword.from_dict(keyword_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


