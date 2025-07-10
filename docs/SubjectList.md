# SubjectList

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Metadata** | Pointer to [**Metadata**](Metadata.md) |  | [optional] 
**Pagination** | Pointer to [**Pagination**](Pagination.md) |  | [optional] 
**Data** | Pointer to [**[]Subject**](Subject.md) |  | [optional] 

## Methods

### NewSubjectList

`func NewSubjectList() *SubjectList`

NewSubjectList instantiates a new SubjectList object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSubjectListWithDefaults

`func NewSubjectListWithDefaults() *SubjectList`

NewSubjectListWithDefaults instantiates a new SubjectList object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMetadata

`func (o *SubjectList) GetMetadata() Metadata`

GetMetadata returns the Metadata field if non-nil, zero value otherwise.

### GetMetadataOk

`func (o *SubjectList) GetMetadataOk() (*Metadata, bool)`

GetMetadataOk returns a tuple with the Metadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMetadata

`func (o *SubjectList) SetMetadata(v Metadata)`

SetMetadata sets Metadata field to given value.

### HasMetadata

`func (o *SubjectList) HasMetadata() bool`

HasMetadata returns a boolean if a field has been set.

### GetPagination

`func (o *SubjectList) GetPagination() Pagination`

GetPagination returns the Pagination field if non-nil, zero value otherwise.

### GetPaginationOk

`func (o *SubjectList) GetPaginationOk() (*Pagination, bool)`

GetPaginationOk returns a tuple with the Pagination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPagination

`func (o *SubjectList) SetPagination(v Pagination)`

SetPagination sets Pagination field to given value.

### HasPagination

`func (o *SubjectList) HasPagination() bool`

HasPagination returns a boolean if a field has been set.

### GetData

`func (o *SubjectList) GetData() []Subject`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *SubjectList) GetDataOk() (*[]Subject, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *SubjectList) SetData(v []Subject)`

SetData sets Data field to given value.

### HasData

`func (o *SubjectList) HasData() bool`

HasData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


