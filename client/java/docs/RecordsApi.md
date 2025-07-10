# RecordsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**createRecords**](RecordsApi.md#createRecords) | **POST** /studies/{studyKey}/records | Add new record or update subject/record data |
| [**listRecords**](RecordsApi.md#listRecords) | **GET** /studies/{studyKey}/records | List records (eCRF instances) in a study |


<a id="createRecords"></a>
# **createRecords**
> RecordJobStatus createRecords(studyKey, componentsSchemasRecordCreateRequestItem)

Add new record or update subject/record data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RecordsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://edc.prod.imednetapi.com/api/v1/edc");
    
    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: securityKeyAuth
    ApiKeyAuth securityKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("securityKeyAuth");
    securityKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //securityKeyAuth.setApiKeyPrefix("Token");

    RecordsApi apiInstance = new RecordsApi(defaultClient);
    String studyKey = "studyKey_example"; // String | Study key identifying the study context for the request
    List<ComponentsSchemasRecordCreateRequestItem> componentsSchemasRecordCreateRequestItem = Arrays.asList(); // List<ComponentsSchemasRecordCreateRequestItem> | An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update).
    try {
      RecordJobStatus result = apiInstance.createRecords(studyKey, componentsSchemasRecordCreateRequestItem);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RecordsApi#createRecords");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **studyKey** | **String**| Study key identifying the study context for the request | |
| **componentsSchemasRecordCreateRequestItem** | [**List&lt;ComponentsSchemasRecordCreateRequestItem&gt;**](ComponentsSchemasRecordCreateRequestItem.md)| An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update). | |

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
| **202** | Accepted request for record creation. Returns a job identifier to check status. |  -  |
| **400** | Bad request (malformed or invalid input) |  -  |
| **401** | Authentication failed or was not provided |  -  |
| **403** | Authenticated but not allowed to access the resource |  -  |
| **404** | The requested resource was not found |  -  |
| **429** | Too many requests (rate limit exceeded) |  -  |
| **500** | Internal server error (unexpected condition encountered) |  -  |

<a id="listRecords"></a>
# **listRecords**
> RecordList listRecords(studyKey, page, size, sort, filter, recordDataFilter)

List records (eCRF instances) in a study

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RecordsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://edc.prod.imednetapi.com/api/v1/edc");
    
    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: securityKeyAuth
    ApiKeyAuth securityKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("securityKeyAuth");
    securityKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //securityKeyAuth.setApiKeyPrefix("Token");

    RecordsApi apiInstance = new RecordsApi(defaultClient);
    String studyKey = "studyKey_example"; // String | Study key identifying the study context for the request
    Integer page = 0; // Integer | Page index to retrieve (0-based)
    Integer size = 25; // Integer | Number of items to return per page (max 500)
    String sort = "sort_example"; // String | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated.
    String filter = "filter_example"; // String | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR).
    String recordDataFilter = "recordDataFilter_example"; // String | Optional filter criteria to apply on recordData fields (question responses). Supports ==, !=, <, <=, >, >=, =~ (contains) and can combine multiple criteria with `;` (AND) or `,` (OR).
    try {
      RecordList result = apiInstance.listRecords(studyKey, page, size, sort, filter, recordDataFilter);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling RecordsApi#listRecords");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **studyKey** | **String**| Study key identifying the study context for the request | |
| **page** | **Integer**| Page index to retrieve (0-based) | [optional] [default to 0] |
| **size** | **Integer**| Number of items to return per page (max 500) | [optional] [default to 25] |
| **sort** | **String**| Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] |
| **filter** | **String**| Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] |
| **recordDataFilter** | **String**| Optional filter criteria to apply on recordData fields (question responses). Supports &#x3D;&#x3D;, !&#x3D;, &lt;, &lt;&#x3D;, &gt;, &gt;&#x3D;, &#x3D;~ (contains) and can combine multiple criteria with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] |

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
| **200** | Successful response with list of records |  -  |
| **400** | Bad request (malformed or invalid input) |  -  |
| **401** | Authentication failed or was not provided |  -  |
| **403** | Authenticated but not allowed to access the resource |  -  |
| **404** | The requested resource was not found |  -  |
| **500** | Internal server error (unexpected condition encountered) |  -  |

