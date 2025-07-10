# RecordsAPI

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RecordsAPI_createRecords**](RecordsAPI.md#RecordsAPI_createRecords) | **POST** /studies/{studyKey}/records | Add new record or update subject/record data
[**RecordsAPI_listRecords**](RecordsAPI.md#RecordsAPI_listRecords) | **GET** /studies/{studyKey}/records | List records (eCRF instances) in a study


# **RecordsAPI_createRecords**
```c
// Add new record or update subject/record data
//
record_job_status_t* RecordsAPI_createRecords(apiClient_t *apiClient, char *studyKey, list_t *components_schemas_record_create_request_item);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**studyKey** | **char \*** | Study key identifying the study context for the request | 
**components_schemas_record_create_request_item** | **[list_t](components_schemas_record_create_request_item.md) \*** | An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update). | 

### Return type

[record_job_status_t](record_job_status.md) *


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RecordsAPI_listRecords**
```c
// List records (eCRF instances) in a study
//
record_list_t* RecordsAPI_listRecords(apiClient_t *apiClient, char *studyKey, int *page, int *size, char *sort, char *filter, char *recordDataFilter);
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
**recordDataFilter** | **char \*** | Optional filter criteria to apply on recordData fields (question responses). Supports &#x3D;&#x3D;, !&#x3D;, &lt;, &lt;&#x3D;, &gt;, &gt;&#x3D;, &#x3D;~ (contains) and can combine multiple criteria with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] 

### Return type

[record_list_t](record_list.md) *


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

