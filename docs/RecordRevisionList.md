# RecordRevisionList

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Metadata** | Pointer to [**Metadata**](Metadata.md) |  | [optional] 
**Pagination** | Pointer to [**Pagination**](Pagination.md) |  | [optional] 
**Data** | Pointer to [**[]RecordRevision**](RecordRevision.md) |  | [optional] 

## Methods

### NewRecordRevisionList

`func NewRecordRevisionList() *RecordRevisionList`

NewRecordRevisionList instantiates a new RecordRevisionList object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRecordRevisionListWithDefaults

`func NewRecordRevisionListWithDefaults() *RecordRevisionList`

NewRecordRevisionListWithDefaults instantiates a new RecordRevisionList object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMetadata

`func (o *RecordRevisionList) GetMetadata() Metadata`

GetMetadata returns the Metadata field if non-nil, zero value otherwise.

### GetMetadataOk

`func (o *RecordRevisionList) GetMetadataOk() (*Metadata, bool)`

GetMetadataOk returns a tuple with the Metadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMetadata

`func (o *RecordRevisionList) SetMetadata(v Metadata)`

SetMetadata sets Metadata field to given value.

### HasMetadata

`func (o *RecordRevisionList) HasMetadata() bool`

HasMetadata returns a boolean if a field has been set.

### GetPagination

`func (o *RecordRevisionList) GetPagination() Pagination`

GetPagination returns the Pagination field if non-nil, zero value otherwise.

### GetPaginationOk

`func (o *RecordRevisionList) GetPaginationOk() (*Pagination, bool)`

GetPaginationOk returns a tuple with the Pagination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPagination

`func (o *RecordRevisionList) SetPagination(v Pagination)`

SetPagination sets Pagination field to given value.

### HasPagination

`func (o *RecordRevisionList) HasPagination() bool`

HasPagination returns a boolean if a field has been set.

### GetData

`func (o *RecordRevisionList) GetData() []RecordRevision`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *RecordRevisionList) GetDataOk() (*[]RecordRevision, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *RecordRevisionList) SetData(v []RecordRevision)`

SetData sets Data field to given value.

### HasData

`func (o *RecordRevisionList) HasData() bool`

HasData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


