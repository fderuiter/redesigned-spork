# openapi_client.RecordsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_records**](RecordsApi.md#create_records) | **POST** /studies/{studyKey}/records | Add new record or update subject/record data
[**list_records**](RecordsApi.md#list_records) | **GET** /studies/{studyKey}/records | List records (eCRF instances) in a study


# **create_records**
> RecordJobStatus create_records(study_key, components_schemas_record_create_request_item)

Add new record or update subject/record data

### Example

* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (securityKeyAuth):

```python
import openapi_client
from openapi_client.models.components_schemas_record_create_request_item import ComponentsSchemasRecordCreateRequestItem
from openapi_client.models.record_job_status import RecordJobStatus
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
    api_instance = openapi_client.RecordsApi(api_client)
    study_key = 'study_key_example' # str | Study key identifying the study context for the request
    components_schemas_record_create_request_item = [openapi_client.ComponentsSchemasRecordCreateRequestItem()] # List[ComponentsSchemasRecordCreateRequestItem] | An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update).

    try:
        # Add new record or update subject/record data
        api_response = api_instance.create_records(study_key, components_schemas_record_create_request_item)
        print("The response of RecordsApi->create_records:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling RecordsApi->create_records: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **study_key** | **str**| Study key identifying the study context for the request | 
 **components_schemas_record_create_request_item** | [**List[ComponentsSchemasRecordCreateRequestItem]**](ComponentsSchemasRecordCreateRequestItem.md)| An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update). | 

### Return type

[**RecordJobStatus**](RecordJobStatus.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**202** | Accepted request for record creation. Returns a job identifier to check status. |  -  |
**400** | Bad request (malformed or invalid input) |  -  |
**401** | Authentication failed or was not provided |  -  |
**403** | Authenticated but not allowed to access the resource |  -  |
**404** | The requested resource was not found |  -  |
**429** | Too many requests (rate limit exceeded) |  -  |
**500** | Internal server error (unexpected condition encountered) |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_records**
> RecordList list_records(study_key, page=page, size=size, sort=sort, filter=filter, record_data_filter=record_data_filter)

List records (eCRF instances) in a study

### Example

* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (securityKeyAuth):

```python
import openapi_client
from openapi_client.models.record_list import RecordList
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
    api_instance = openapi_client.RecordsApi(api_client)
    study_key = 'study_key_example' # str | Study key identifying the study context for the request
    page = 0 # int | Page index to retrieve (0-based) (optional) (default to 0)
    size = 25 # int | Number of items to return per page (max 500) (optional) (default to 25)
    sort = 'sort_example' # str | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. (optional)
    filter = 'filter_example' # str | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR). (optional)
    record_data_filter = 'record_data_filter_example' # str | Optional filter criteria to apply on recordData fields (question responses). Supports ==, !=, <, <=, >, >=, =~ (contains) and can combine multiple criteria with `;` (AND) or `,` (OR). (optional)

    try:
        # List records (eCRF instances) in a study
        api_response = api_instance.list_records(study_key, page=page, size=size, sort=sort, filter=filter, record_data_filter=record_data_filter)
        print("The response of RecordsApi->list_records:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling RecordsApi->list_records: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **study_key** | **str**| Study key identifying the study context for the request | 
 **page** | **int**| Page index to retrieve (0-based) | [optional] [default to 0]
 **size** | **int**| Number of items to return per page (max 500) | [optional] [default to 25]
 **sort** | **str**| Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] 
 **filter** | **str**| Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] 
 **record_data_filter** | **str**| Optional filter criteria to apply on recordData fields (question responses). Supports &#x3D;&#x3D;, !&#x3D;, &lt;, &lt;&#x3D;, &gt;, &gt;&#x3D;, &#x3D;~ (contains) and can combine multiple criteria with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] 

### Return type

[**RecordList**](RecordList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful response with list of records |  -  |
**400** | Bad request (malformed or invalid input) |  -  |
**401** | Authentication failed or was not provided |  -  |
**403** | Authenticated but not allowed to access the resource |  -  |
**404** | The requested resource was not found |  -  |
**500** | Internal server error (unexpected condition encountered) |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

