# openapi_client.AdministrationApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**list_users**](AdministrationApi.md#list_users) | **GET** /studies/{studyKey}/users | List users and their roles in a study


# **list_users**
> UserList list_users(study_key, page=page, size=size, sort=sort, include_inactive=include_inactive)

List users and their roles in a study

### Example

* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (securityKeyAuth):

```python
import openapi_client
from openapi_client.models.user_list import UserList
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
    api_instance = openapi_client.AdministrationApi(api_client)
    study_key = 'study_key_example' # str | Study key identifying the study context for the request
    page = 0 # int | Page index to retrieve (0-based) (optional) (default to 0)
    size = 25 # int | Number of items to return per page (max 500) (optional) (default to 25)
    sort = 'sort_example' # str | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. (optional)
    include_inactive = False # bool | For user listing, whether to include inactive users (optional) (default to False)

    try:
        # List users and their roles in a study
        api_response = api_instance.list_users(study_key, page=page, size=size, sort=sort, include_inactive=include_inactive)
        print("The response of AdministrationApi->list_users:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling AdministrationApi->list_users: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **study_key** | **str**| Study key identifying the study context for the request | 
 **page** | **int**| Page index to retrieve (0-based) | [optional] [default to 0]
 **size** | **int**| Number of items to return per page (max 500) | [optional] [default to 25]
 **sort** | **str**| Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] 
 **include_inactive** | **bool**| For user listing, whether to include inactive users | [optional] [default to False]

### Return type

[**UserList**](UserList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful response with list of users |  -  |
**400** | Bad request (malformed or invalid input) |  -  |
**401** | Authentication failed or was not provided |  -  |
**403** | Authenticated but not allowed to access the resource |  -  |
**404** | The requested resource was not found |  -  |
**500** | Internal server error (unexpected condition encountered) |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

