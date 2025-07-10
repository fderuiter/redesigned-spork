# Pagination

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CurrentPage** | Pointer to **int32** | Current index page returned | [optional] 
**Size** | Pointer to **int32** | Number of items per page returned | [optional] 
**TotalPages** | Pointer to **int32** | Total number of pages available | [optional] 
**TotalElements** | Pointer to **int32** | Total number of elements (items) available | [optional] 
**Sort** | Pointer to [**[]Sort**](Sort.md) |  | [optional] 

## Methods

### NewPagination

`func NewPagination() *Pagination`

NewPagination instantiates a new Pagination object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPaginationWithDefaults

`func NewPaginationWithDefaults() *Pagination`

NewPaginationWithDefaults instantiates a new Pagination object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCurrentPage

`func (o *Pagination) GetCurrentPage() int32`

GetCurrentPage returns the CurrentPage field if non-nil, zero value otherwise.

### GetCurrentPageOk

`func (o *Pagination) GetCurrentPageOk() (*int32, bool)`

GetCurrentPageOk returns a tuple with the CurrentPage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrentPage

`func (o *Pagination) SetCurrentPage(v int32)`

SetCurrentPage sets CurrentPage field to given value.

### HasCurrentPage

`func (o *Pagination) HasCurrentPage() bool`

HasCurrentPage returns a boolean if a field has been set.

### GetSize

`func (o *Pagination) GetSize() int32`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *Pagination) GetSizeOk() (*int32, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *Pagination) SetSize(v int32)`

SetSize sets Size field to given value.

### HasSize

`func (o *Pagination) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetTotalPages

`func (o *Pagination) GetTotalPages() int32`

GetTotalPages returns the TotalPages field if non-nil, zero value otherwise.

### GetTotalPagesOk

`func (o *Pagination) GetTotalPagesOk() (*int32, bool)`

GetTotalPagesOk returns a tuple with the TotalPages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalPages

`func (o *Pagination) SetTotalPages(v int32)`

SetTotalPages sets TotalPages field to given value.

### HasTotalPages

`func (o *Pagination) HasTotalPages() bool`

HasTotalPages returns a boolean if a field has been set.

### GetTotalElements

`func (o *Pagination) GetTotalElements() int32`

GetTotalElements returns the TotalElements field if non-nil, zero value otherwise.

### GetTotalElementsOk

`func (o *Pagination) GetTotalElementsOk() (*int32, bool)`

GetTotalElementsOk returns a tuple with the TotalElements field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalElements

`func (o *Pagination) SetTotalElements(v int32)`

SetTotalElements sets TotalElements field to given value.

### HasTotalElements

`func (o *Pagination) HasTotalElements() bool`

HasTotalElements returns a boolean if a field has been set.

### GetSort

`func (o *Pagination) GetSort() []Sort`

GetSort returns the Sort field if non-nil, zero value otherwise.

### GetSortOk

`func (o *Pagination) GetSortOk() (*[]Sort, bool)`

GetSortOk returns a tuple with the Sort field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSort

`func (o *Pagination) SetSort(v []Sort)`

SetSort sets Sort field to given value.

### HasSort

`func (o *Pagination) HasSort() bool`

HasSort returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


