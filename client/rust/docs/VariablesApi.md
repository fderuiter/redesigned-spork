# \VariablesApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**list_variables**](VariablesApi.md#list_variables) | **GET** /studies/{studyKey}/variables | List variables (fields) in a study



## list_variables

> models::VariableList list_variables(study_key, page, size, sort, filter)
List variables (fields) in a study

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**study_key** | **String** | Study key identifying the study context for the request | [required] |
**page** | Option<**i32**> | Page index to retrieve (0-based) |  |[default to 0]
**size** | Option<**i32**> | Number of items to return per page (max 500) |  |[default to 25]
**sort** | Option<**String**> | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. |  |
**filter** | Option<**String**> | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR). |  |

### Return type

[**models::VariableList**](VariableList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

