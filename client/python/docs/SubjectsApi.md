# openapi_client.SubjectsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**list_subjects**](SubjectsApi.md#list_subjects) | **GET** /studies/{studyKey}/subjects | List subjects in a study


# **list_subjects**
> SubjectList list_subjects(study_key, page=page, size=size, sort=sort, filter=filter)

List subjects in a study

### Example

* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (securityKeyAuth):

```python
import openapi_client
from openapi_client.models.subject_list import SubjectList
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://edc.prod.imednetapi.com/api/v1/edc
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://edc.prod.imednetapi.com/api/v1/edc"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: apiKeyAuth
configuration.api_key['apiKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['apiKeyAuth'] = 'Bearer'

# Configure API key authorization: securityKeyAuth
configuration.api_key['securityKeyAuth'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['securityKeyAuth'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.SubjectsApi(api_client)
    study_key = 'study_key_example' # str | Study key identifying the study context for the request
    page = 0 # int | Page index to retrieve (0-based) (optional) (default to 0)
    size = 25 # int | Number of items to return per page (max 500) (optional) (default to 25)
    sort = 'sort_example' # str | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. (optional)
    filter = 'filter_example' # str | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR). (optional)

    try:
        # List subjects in a study
        api_response = api_instance.list_subjects(study_key, page=page, size=size, sort=sort, filter=filter)
        print("The response of SubjectsApi->list_subjects:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling SubjectsApi->list_subjects: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **study_key** | **str**| Study key identifying the study context for the request | 
 **page** | **int**| Page index to retrieve (0-based) | [optional] [default to 0]
 **size** | **int**| Number of items to return per page (max 500) | [optional] [default to 25]
 **sort** | **str**| Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] 
 **filter** | **str**| Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] 

### Return type

[**SubjectList**](SubjectList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful response with list of subjects |  -  |
**400** | Bad request (malformed or invalid input) |  -  |
**401** | Authentication failed or was not provided |  -  |
**403** | Authenticated but not allowed to access the resource |  -  |
**404** | The requested resource was not found |  -  |
**500** | Internal server error (unexpected condition encountered) |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

