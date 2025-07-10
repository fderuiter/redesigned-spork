# JobsAPI

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobsAPI_getJobStatus**](JobsAPI.md#JobsAPI_getJobStatus) | **GET** /studies/{studyKey}/jobs/{batchId} | Retrieve job status by batch ID


# **JobsAPI_getJobStatus**
```c
// Retrieve job status by batch ID
//
job_t* JobsAPI_getJobStatus(apiClient_t *apiClient, char *studyKey, char *batchId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**studyKey** | **char \*** | Study key identifying the study context for the request | 
**batchId** | **char \*** | Batch ID of the job to retrieve | 

### Return type

[job_t](job.md) *


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

