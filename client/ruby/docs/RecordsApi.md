# OpenapiClient::RecordsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**create_records**](RecordsApi.md#create_records) | **POST** /studies/{studyKey}/records | Add new record or update subject/record data |
| [**list_records**](RecordsApi.md#list_records) | **GET** /studies/{studyKey}/records | List records (eCRF instances) in a study |


## create_records

> <RecordJobStatus> create_records(study_key, components_schemas_record_create_request_item)

Add new record or update subject/record data

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

api_instance = OpenapiClient::RecordsApi.new
study_key = 'study_key_example' # String | Study key identifying the study context for the request
components_schemas_record_create_request_item = [OpenapiClient::ComponentsSchemasRecordCreateRequestItem.new({form_key: 'form_key_example', data: { key: 3.56}})] # Array<ComponentsSchemasRecordCreateRequestItem> | An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update).

begin
  # Add new record or update subject/record data
  result = api_instance.create_records(study_key, components_schemas_record_create_request_item)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RecordsApi->create_records: #{e}"
end
```

#### Using the create_records_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RecordJobStatus>, Integer, Hash)> create_records_with_http_info(study_key, components_schemas_record_create_request_item)

```ruby
begin
  # Add new record or update subject/record data
  data, status_code, headers = api_instance.create_records_with_http_info(study_key, components_schemas_record_create_request_item)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RecordJobStatus>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RecordsApi->create_records_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Study key identifying the study context for the request |  |
| **components_schemas_record_create_request_item** | [**Array&lt;ComponentsSchemasRecordCreateRequestItem&gt;**](ComponentsSchemasRecordCreateRequestItem.md) | An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update). |  |

### Return type

[**RecordJobStatus**](RecordJobStatus.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## list_records

> <RecordList> list_records(study_key, opts)

List records (eCRF instances) in a study

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

api_instance = OpenapiClient::RecordsApi.new
study_key = 'study_key_example' # String | Study key identifying the study context for the request
opts = {
  page: 0, # Integer | Page index to retrieve (0-based)
  size: 25, # Integer | Number of items to return per page (max 500)
  sort: 'sort_example', # String | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated.
  filter: 'filter_example', # String | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR).
  record_data_filter: 'record_data_filter_example' # String | Optional filter criteria to apply on recordData fields (question responses). Supports ==, !=, <, <=, >, >=, =~ (contains) and can combine multiple criteria with `;` (AND) or `,` (OR).
}

begin
  # List records (eCRF instances) in a study
  result = api_instance.list_records(study_key, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RecordsApi->list_records: #{e}"
end
```

#### Using the list_records_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RecordList>, Integer, Hash)> list_records_with_http_info(study_key, opts)

```ruby
begin
  # List records (eCRF instances) in a study
  data, status_code, headers = api_instance.list_records_with_http_info(study_key, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RecordList>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RecordsApi->list_records_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **study_key** | **String** | Study key identifying the study context for the request |  |
| **page** | **Integer** | Page index to retrieve (0-based) | [optional][default to 0] |
| **size** | **Integer** | Number of items to return per page (max 500) | [optional][default to 25] |
| **sort** | **String** | Sorting criteria in the format &#x60;property,ASC&#x60; or &#x60;property,DESC&#x60;. Can be repeated. | [optional] |
| **filter** | **String** | Optional filter criteria to apply, in the format &#x60;attribute&#x3D;&#x3D;value&#x60; with support for &gt;, &gt;&#x3D;, &lt;, &lt;&#x3D;, !&#x3D;. Multiple criteria can be combined with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] |
| **record_data_filter** | **String** | Optional filter criteria to apply on recordData fields (question responses). Supports &#x3D;&#x3D;, !&#x3D;, &lt;, &lt;&#x3D;, &gt;, &gt;&#x3D;, &#x3D;~ (contains) and can combine multiple criteria with &#x60;;&#x60; (AND) or &#x60;,&#x60; (OR). | [optional] |

### Return type

[**RecordList**](RecordList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

