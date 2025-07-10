# QueryComment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Sequence** | Pointer to **int32** | Sequence number of the comment/action in the query history | [optional] 
**AnnotationStatus** | Pointer to **string** | Status of the query after this comment (e.g., Open, Closed) | [optional] 
**User** | Pointer to **string** | Username of the user who made the comment or action | [optional] 
**Comment** | Pointer to **string** | Text of the comment | [optional] 
**Closed** | Pointer to **bool** | Whether the query was marked closed at this step | [optional] 
**Date** | Pointer to **string** | Date of the comment or action | [optional] 

## Methods

### NewQueryComment

`func NewQueryComment() *QueryComment`

NewQueryComment instantiates a new QueryComment object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQueryCommentWithDefaults

`func NewQueryCommentWithDefaults() *QueryComment`

NewQueryCommentWithDefaults instantiates a new QueryComment object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSequence

`func (o *QueryComment) GetSequence() int32`

GetSequence returns the Sequence field if non-nil, zero value otherwise.

### GetSequenceOk

`func (o *QueryComment) GetSequenceOk() (*int32, bool)`

GetSequenceOk returns a tuple with the Sequence field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSequence

`func (o *QueryComment) SetSequence(v int32)`

SetSequence sets Sequence field to given value.

### HasSequence

`func (o *QueryComment) HasSequence() bool`

HasSequence returns a boolean if a field has been set.

### GetAnnotationStatus

`func (o *QueryComment) GetAnnotationStatus() string`

GetAnnotationStatus returns the AnnotationStatus field if non-nil, zero value otherwise.

### GetAnnotationStatusOk

`func (o *QueryComment) GetAnnotationStatusOk() (*string, bool)`

GetAnnotationStatusOk returns a tuple with the AnnotationStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAnnotationStatus

`func (o *QueryComment) SetAnnotationStatus(v string)`

SetAnnotationStatus sets AnnotationStatus field to given value.

### HasAnnotationStatus

`func (o *QueryComment) HasAnnotationStatus() bool`

HasAnnotationStatus returns a boolean if a field has been set.

### GetUser

`func (o *QueryComment) GetUser() string`

GetUser returns the User field if non-nil, zero value otherwise.

### GetUserOk

`func (o *QueryComment) GetUserOk() (*string, bool)`

GetUserOk returns a tuple with the User field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUser

`func (o *QueryComment) SetUser(v string)`

SetUser sets User field to given value.

### HasUser

`func (o *QueryComment) HasUser() bool`

HasUser returns a boolean if a field has been set.

### GetComment

`func (o *QueryComment) GetComment() string`

GetComment returns the Comment field if non-nil, zero value otherwise.

### GetCommentOk

`func (o *QueryComment) GetCommentOk() (*string, bool)`

GetCommentOk returns a tuple with the Comment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetComment

`func (o *QueryComment) SetComment(v string)`

SetComment sets Comment field to given value.

### HasComment

`func (o *QueryComment) HasComment() bool`

HasComment returns a boolean if a field has been set.

### GetClosed

`func (o *QueryComment) GetClosed() bool`

GetClosed returns the Closed field if non-nil, zero value otherwise.

### GetClosedOk

`func (o *QueryComment) GetClosedOk() (*bool, bool)`

GetClosedOk returns a tuple with the Closed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClosed

`func (o *QueryComment) SetClosed(v bool)`

SetClosed sets Closed field to given value.

### HasClosed

`func (o *QueryComment) HasClosed() bool`

HasClosed returns a boolean if a field has been set.

### GetDate

`func (o *QueryComment) GetDate() string`

GetDate returns the Date field if non-nil, zero value otherwise.

### GetDateOk

`func (o *QueryComment) GetDateOk() (*string, bool)`

GetDateOk returns a tuple with the Date field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDate

`func (o *QueryComment) SetDate(v string)`

SetDate sets Date field to given value.

### HasDate

`func (o *QueryComment) HasDate() bool`

HasDate returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


