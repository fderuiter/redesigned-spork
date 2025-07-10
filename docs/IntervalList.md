# IntervalList

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Metadata** | Pointer to [**Metadata**](Metadata.md) |  | [optional] 
**Pagination** | Pointer to [**Pagination**](Pagination.md) |  | [optional] 
**Data** | Pointer to [**[]Interval**](Interval.md) |  | [optional] 

## Methods

### NewIntervalList

`func NewIntervalList() *IntervalList`

NewIntervalList instantiates a new IntervalList object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewIntervalListWithDefaults

`func NewIntervalListWithDefaults() *IntervalList`

NewIntervalListWithDefaults instantiates a new IntervalList object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMetadata

`func (o *IntervalList) GetMetadata() Metadata`

GetMetadata returns the Metadata field if non-nil, zero value otherwise.

### GetMetadataOk

`func (o *IntervalList) GetMetadataOk() (*Metadata, bool)`

GetMetadataOk returns a tuple with the Metadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMetadata

`func (o *IntervalList) SetMetadata(v Metadata)`

SetMetadata sets Metadata field to given value.

### HasMetadata

`func (o *IntervalList) HasMetadata() bool`

HasMetadata returns a boolean if a field has been set.

### GetPagination

`func (o *IntervalList) GetPagination() Pagination`

GetPagination returns the Pagination field if non-nil, zero value otherwise.

### GetPaginationOk

`func (o *IntervalList) GetPaginationOk() (*Pagination, bool)`

GetPaginationOk returns a tuple with the Pagination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPagination

`func (o *IntervalList) SetPagination(v Pagination)`

SetPagination sets Pagination field to given value.

### HasPagination

`func (o *IntervalList) HasPagination() bool`

HasPagination returns a boolean if a field has been set.

### GetData

`func (o *IntervalList) GetData() []Interval`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *IntervalList) GetDataOk() (*[]Interval, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *IntervalList) SetData(v []Interval)`

SetData sets Data field to given value.

### HasData

`func (o *IntervalList) HasData() bool`

HasData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


