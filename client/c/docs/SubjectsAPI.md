# SubjectsAPI

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubjectsAPI_listSubjects**](SubjectsAPI.md#SubjectsAPI_listSubjects) | **GET** /studies/{studyKey}/subjects | List subjects in a study


# **SubjectsAPI_listSubjects**
```c
// List subjects in a study
//
subject_list_t* SubjectsAPI_listSubjects(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, char *filter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**studyKey** | **char \*** | Study key identifying the study context for the request | 
**page** | **int \*** | Page index to retrieve (0-based) | [optional] [default to 0]
**size** | **int \*** | Number of items to return per page (max 500) | [optional] [default to 25]
**sort** | **char \*** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] 
**filter** | **char \*** | Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] 

### Return type

[subject_list_t](subject_list.md) *


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

