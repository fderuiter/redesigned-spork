# Org.OpenAPITools.Api.QueriesApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**ListQueries**](QueriesApi.md#listqueries) | **GET** /studies/{studyKey}/queries | List data queries in a study |

<a id="listqueries"></a>
# **ListQueries**
> QueryList ListQueries (string studyKey, int page = null, int size = null, string sort = null, string filter = null)

List data queries in a study


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **studyKey** | **string** | Study key identifying the study context for the request |  |
| **page** | **int** | Page index to retrieve (0-based) | [optional] [default to 0] |
| **size** | **int** | Number of items to return per page (max 500) | [optional] [default to 25] |
| **sort** | **string** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional]  |
| **filter** | **string** | Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional]  |

### Return type

[**QueryList**](QueryList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Successful response with list of queries |  -  |
| **400** | Bad request (malformed or invalid input) |  -  |
| **401** | Authentication failed or was not provided |  -  |
| **403** | Authenticated but not allowed to access the resource |  -  |
| **404** | The requested resource was not found |  -  |
| **500** | Internal server error (unexpected condition encountered) |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

