# openapi_client.JobsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_job_status**](JobsApi.md#get_job_status) | **GET** /studies/{studyKey}/jobs/{batchId} | Retrieve job status by batch ID


# **get_job_status**
> Job get_job_status(study_key, batch_id)

Retrieve job status by batch ID

### Example

* Api Key Authentication (apiKeyAuth):
* Api Key Authentication (securityKeyAuth):

```python
import openapi_client
from openapi_client.models.job import Job
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
    api_instance = openapi_client.JobsApi(api_client)
    study_key = 'study_key_example' # str | Study key identifying the study context for the request
    batch_id = 'batch_id_example' # str | Batch ID of the job to retrieve

    try:
        # Retrieve job status by batch ID
        api_response = api_instance.get_job_status(study_key, batch_id)
        print("The response of JobsApi->get_job_status:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling JobsApi->get_job_status: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **study_key** | **str**| Study key identifying the study context for the request | 
 **batch_id** | **str**| Batch ID of the job to retrieve | 

### Return type

[**Job**](Job.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful response with job status information |  -  |
**400** | Bad request (malformed or invalid input) |  -  |
**401** | Authentication failed or was not provided |  -  |
**403** | Authenticated but not allowed to access the resource |  -  |
**404** | The requested resource was not found |  -  |
**500** | Internal server error (unexpected condition encountered) |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

