# Query

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**SubjectId** | Pointer to **int32** | Mednet subject ID associated with the query (if applicable) | [optional] 
**SubjectOid** | Pointer to **string** | Client-assigned subject OID (if applicable) | [optional] 
**AnnotationType** | Pointer to **string** | Category/type of the query (e.g., subject, record, question) | [optional] 
**AnnotationId** | Pointer to **int32** | Unique system identifier for the query | [optional] 
**Type** | Pointer to **string** | System text identifier for the query type/location (subject, record, question) | [optional] 
**Description** | Pointer to **string** | Description of the query (e.g., reason or context) | [optional] 
**RecordId** | Pointer to **int32** | Record ID associated with the query (if applicable) | [optional] 
**Variable** | Pointer to **string** | Variable name (field) associated with the query (if applicable) | [optional] 
**SubjectKey** | Pointer to **string** | Subject display ID associated with the query (if applicable) | [optional] 
**DateCreated** | Pointer to **string** | Date when the query was created | [optional] 
**DateModified** | Pointer to **string** | Date when the query was last modified | [optional] 
**QueryComments** | Pointer to [**[]QueryComment**](QueryComment.md) | History of comments/actions on the query | [optional] 

## Methods

### NewQuery

`func NewQuery() *Query`

NewQuery instantiates a new Query object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQueryWithDefaults

`func NewQueryWithDefaults() *Query`

NewQueryWithDefaults instantiates a new Query object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Query) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Query) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Query) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Query) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetSubjectId

`func (o *Query) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *Query) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *Query) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *Query) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectOid

`func (o *Query) GetSubjectOid() string`

GetSubjectOid returns the SubjectOid field if non-nil, zero value otherwise.

### GetSubjectOidOk

`func (o *Query) GetSubjectOidOk() (*string, bool)`

GetSubjectOidOk returns a tuple with the SubjectOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectOid

`func (o *Query) SetSubjectOid(v string)`

SetSubjectOid sets SubjectOid field to given value.

### HasSubjectOid

`func (o *Query) HasSubjectOid() bool`

HasSubjectOid returns a boolean if a field has been set.

### GetAnnotationType

`func (o *Query) GetAnnotationType() string`

GetAnnotationType returns the AnnotationType field if non-nil, zero value otherwise.

### GetAnnotationTypeOk

`func (o *Query) GetAnnotationTypeOk() (*string, bool)`

GetAnnotationTypeOk returns a tuple with the AnnotationType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAnnotationType

`func (o *Query) SetAnnotationType(v string)`

SetAnnotationType sets AnnotationType field to given value.

### HasAnnotationType

`func (o *Query) HasAnnotationType() bool`

HasAnnotationType returns a boolean if a field has been set.

### GetAnnotationId

`func (o *Query) GetAnnotationId() int32`

GetAnnotationId returns the AnnotationId field if non-nil, zero value otherwise.

### GetAnnotationIdOk

`func (o *Query) GetAnnotationIdOk() (*int32, bool)`

GetAnnotationIdOk returns a tuple with the AnnotationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAnnotationId

`func (o *Query) SetAnnotationId(v int32)`

SetAnnotationId sets AnnotationId field to given value.

### HasAnnotationId

`func (o *Query) HasAnnotationId() bool`

HasAnnotationId returns a boolean if a field has been set.

### GetType

`func (o *Query) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *Query) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *Query) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *Query) HasType() bool`

HasType returns a boolean if a field has been set.

### GetDescription

`func (o *Query) GetDescription() string`

GetDescription returns the Description field if non-nil, zero value otherwise.

### GetDescriptionOk

`func (o *Query) GetDescriptionOk() (*string, bool)`

GetDescriptionOk returns a tuple with the Description field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDescription

`func (o *Query) SetDescription(v string)`

SetDescription sets Description field to given value.

### HasDescription

`func (o *Query) HasDescription() bool`

HasDescription returns a boolean if a field has been set.

### GetRecordId

`func (o *Query) GetRecordId() int32`

GetRecordId returns the RecordId field if non-nil, zero value otherwise.

### GetRecordIdOk

`func (o *Query) GetRecordIdOk() (*int32, bool)`

GetRecordIdOk returns a tuple with the RecordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordId

`func (o *Query) SetRecordId(v int32)`

SetRecordId sets RecordId field to given value.

### HasRecordId

`func (o *Query) HasRecordId() bool`

HasRecordId returns a boolean if a field has been set.

### GetVariable

`func (o *Query) GetVariable() string`

GetVariable returns the Variable field if non-nil, zero value otherwise.

### GetVariableOk

`func (o *Query) GetVariableOk() (*string, bool)`

GetVariableOk returns a tuple with the Variable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVariable

`func (o *Query) SetVariable(v string)`

SetVariable sets Variable field to given value.

### HasVariable

`func (o *Query) HasVariable() bool`

HasVariable returns a boolean if a field has been set.

### GetSubjectKey

`func (o *Query) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *Query) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *Query) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *Query) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetDateCreated

`func (o *Query) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Query) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Query) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Query) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Query) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Query) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Query) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Query) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.

### GetQueryComments

`func (o *Query) GetQueryComments() []QueryComment`

GetQueryComments returns the QueryComments field if non-nil, zero value otherwise.

### GetQueryCommentsOk

`func (o *Query) GetQueryCommentsOk() (*[]QueryComment, bool)`

GetQueryCommentsOk returns a tuple with the QueryComments field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQueryComments

`func (o *Query) SetQueryComments(v []QueryComment)`

SetQueryComments sets QueryComments field to given value.

### HasQueryComments

`func (o *Query) HasQueryComments() bool`

HasQueryComments returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


