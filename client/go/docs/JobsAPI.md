# \JobsAPI

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetJobStatus**](JobsAPI.md#GetJobStatus) | **Get** /studies/{studyKey}/jobs/{batchId} | Retrieve job status by batch ID



## GetJobStatus

> Job GetJobStatus(ctx, studyKey, batchId).Execute()

Retrieve job status by batch ID

### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	studyKey := "studyKey_example" // string | Study key identifying the study context for the request
	batchId := "batchId_example" // string | Batch ID of the job to retrieve

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.JobsAPI.GetJobStatus(context.Background(), studyKey, batchId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `JobsAPI.GetJobStatus``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `GetJobStatus`: Job
	fmt.Fprintf(os.Stdout, "Response from `JobsAPI.GetJobStatus`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**studyKey** | **string** | Study key identifying the study context for the request | 
**batchId** | **string** | Batch ID of the job to retrieve | 

### Other Parameters

Other parameters are passed through a pointer to a apiGetJobStatusRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



### Return type

[**Job**](Job.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

