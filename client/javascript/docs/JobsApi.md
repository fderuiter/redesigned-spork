# MednetEdcApi.JobsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getJobStatus**](JobsApi.md#getJobStatus) | **GET** /studies/{studyKey}/jobs/{batchId} | Retrieve job status by batch ID



## getJobStatus

> Job getJobStatus(studyKey, batchId)

Retrieve job status by batch ID

### Example

```javascript
import MednetEdcApi from 'mednet_edc_api';
let defaultClient = MednetEdcApi.ApiClient.instance;
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: securityKeyAuth
let securityKeyAuth = defaultClient.authentications['securityKeyAuth'];
securityKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//securityKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new MednetEdcApi.JobsApi();
let studyKey = "studyKey_example"; // String | Study key identifying the study context for the request
let batchId = "batchId_example"; // String | Batch ID of the job to retrieve
apiInstance.getJobStatus(studyKey, batchId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **studyKey** | **String**| Study key identifying the study context for the request | 
 **batchId** | **String**| Batch ID of the job to retrieve | 

### Return type

[**Job**](Job.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

