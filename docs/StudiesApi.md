# OpenapiClient::StudiesApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**list_studies**](StudiesApi.md#list_studies) | **GET** /studies | List studies accessible by API key |


## list_studies

> <StudyList> list_studies(opts)

List studies accessible by API key

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['x-api-key'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['x-api-key'] = 'Bearer'

  # Configure API key authorization: securityKeyAuth
  config.api_key['x-imn-security-key'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['x-imn-security-key'] = 'Bearer'
end

api_instance = OpenapiClient::StudiesApi.new
opts = {
  page: 0, # Integer | Page index to retrieve (0-based)
  size: 25, # Integer | Number of items to return per page (max 500)
  sort: 'sort_example', # String | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated.
  filter: 'filter_example' # String | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR).
}

begin
  # List studies accessible by API key
  result = api_instance.list_studies(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling StudiesApi->list_studies: #{e}"
end
```

#### Using the list_studies_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<StudyList>, Integer, Hash)> list_studies_with_http_info(opts)

```ruby
begin
  # List studies accessible by API key
  data, status_code, headers = api_instance.list_studies_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <StudyList>
rescue OpenapiClient::ApiError => e
  puts "Error when calling StudiesApi->list_studies_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **page** | **Integer** | Page index to retrieve (0-based) | [optional][default to 0] |
| **size** | **Integer** | Number of items to return per page (max 500) | [optional][default to 25] |
| **sort** | **String** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] |
| **filter** | **String** | Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] |

### Return type

[**StudyList**](StudyList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

