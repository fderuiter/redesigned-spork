# \VariablesAPI

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ListVariables**](VariablesAPI.md#ListVariables) | **Get** /studies/{studyKey}/variables | List variables (fields) in a study



## ListVariables

> VariableList ListVariables(ctx, studyKey).Page(page).Size(size).Sort(sort).Filter(filter).Execute()

List variables (fields) in a study

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
	page := int32(0) // int32 | Page index to retrieve (0-based) (optional) (default to 0)
	size := int32(25) // int32 | Number of items to return per page (max 500) (optional) (default to 25)
	sort := "sort_example" // string | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. (optional)
	filter := "filter_example" // string | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR). (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.VariablesAPI.ListVariables(context.Background(), studyKey).Page(page).Size(size).Sort(sort).Filter(filter).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `VariablesAPI.ListVariables``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `ListVariables`: VariableList
	fmt.Fprintf(os.Stdout, "Response from `VariablesAPI.ListVariables`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**studyKey** | **string** | Study key identifying the study context for the request | 

### Other Parameters

Other parameters are passed through a pointer to a apiListVariablesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **page** | **int32** | Page index to retrieve (0-based) | [default to 0]
 **size** | **int32** | Number of items to return per page (max 500) | [default to 25]
 **sort** | **string** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | 
 **filter** | **string** | Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | 

### Return type

[**VariableList**](VariableList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

