# Metadata

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to **string** | HTTP status of the response (e.g., OK or ERROR) | [optional] 
**Method** | Pointer to **string** | HTTP method of the request | [optional] 
**Path** | Pointer to **string** | Requested URI path | [optional] 
**Timestamp** | Pointer to **time.Time** | Timestamp when response was generated | [optional] 
**Error** | Pointer to [**ComponentsSchemasMetadataError**](ComponentsSchemasMetadataError.md) |  | [optional] 

## Methods

### NewMetadata

`func NewMetadata() *Metadata`

NewMetadata instantiates a new Metadata object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMetadataWithDefaults

`func NewMetadataWithDefaults() *Metadata`

NewMetadataWithDefaults instantiates a new Metadata object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *Metadata) GetStatus() string`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *Metadata) GetStatusOk() (*string, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *Metadata) SetStatus(v string)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *Metadata) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetMethod

`func (o *Metadata) GetMethod() string`

GetMethod returns the Method field if non-nil, zero value otherwise.

### GetMethodOk

`func (o *Metadata) GetMethodOk() (*string, bool)`

GetMethodOk returns a tuple with the Method field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMethod

`func (o *Metadata) SetMethod(v string)`

SetMethod sets Method field to given value.

### HasMethod

`func (o *Metadata) HasMethod() bool`

HasMethod returns a boolean if a field has been set.

### GetPath

`func (o *Metadata) GetPath() string`

GetPath returns the Path field if non-nil, zero value otherwise.

### GetPathOk

`func (o *Metadata) GetPathOk() (*string, bool)`

GetPathOk returns a tuple with the Path field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPath

`func (o *Metadata) SetPath(v string)`

SetPath sets Path field to given value.

### HasPath

`func (o *Metadata) HasPath() bool`

HasPath returns a boolean if a field has been set.

### GetTimestamp

`func (o *Metadata) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *Metadata) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *Metadata) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *Metadata) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetError

`func (o *Metadata) GetError() ComponentsSchemasMetadataError`

GetError returns the Error field if non-nil, zero value otherwise.

### GetErrorOk

`func (o *Metadata) GetErrorOk() (*ComponentsSchemasMetadataError, bool)`

GetErrorOk returns a tuple with the Error field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetError

`func (o *Metadata) SetError(v ComponentsSchemasMetadataError)`

SetError sets Error field to given value.

### HasError

`func (o *Metadata) HasError() bool`

HasError returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


