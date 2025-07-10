# \RecordsApi

All URIs are relative to *https://edc.prod.imednetapi.com/api/v1/edc*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_records**](RecordsApi.md#create_records) | **POST** /studies/{studyKey}/records | Add new record or update subject/record data
[**list_records**](RecordsApi.md#list_records) | **GET** /studies/{studyKey}/records | List records (eCRF instances) in a study



## create_records

> models::RecordJobStatus create_records(study_key, components_schemas_record_create_request_item)
Add new record or update subject/record data

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**study_key** | **String** | Study key identifying the study context for the request | [required] |
**components_schemas_record_create_request_item** | [**Vec<models::ComponentsSchemasRecordCreateRequestItem>**](components_schemas_RecordCreateRequest_item.md) | An array of record objects defining the operation to perform (subject registration, record creation, or scheduled record update). | [required] |

### Return type

[**models::RecordJobStatus**](RecordJobStatus.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## list_records

> models::RecordList list_records(study_key, page, size, sort, filter, record_data_filter)
List records (eCRF instances) in a study

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**study_key** | **String** | Study key identifying the study context for the request | [required] |
**page** | Option<**i32**> | Page index to retrieve (0-based) |  |[default to 0]
**size** | Option<**i32**> | Number of items to return per page (max 500) |  |[default to 25]
**sort** | Option<**String**> | Sorting criteria in the format `property,ASC` or `property,DESC`. Can be repeated. |  |
**filter** | Option<**String**> | Optional filter criteria to apply, in the format `attribute==value` with support for >, >=, <, <=, !=. Multiple criteria can be combined with `;` (AND) or `,` (OR). |  |
**record_data_filter** | Option<**String**> | Optional filter criteria to apply on recordData fields (question responses). Supports ==, !=, <, <=, >, >=, =~ (contains) and can combine multiple criteria with `;` (AND) or `,` (OR). |  |

### Return type

[**models::RecordList**](RecordList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [securityKeyAuth](../README.md#securityKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

