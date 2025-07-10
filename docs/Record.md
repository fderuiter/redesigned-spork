# Record

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**IntervalId** | Pointer to **int32** | Interval ID (visit definition) that this record is associated with | [optional] 
**FormId** | Pointer to **int32** | Form ID of the form this record instance belongs to | [optional] 
**FormKey** | Pointer to **string** | Form key of the form for this record instance | [optional] 
**SiteId** | Pointer to **int32** | Site ID associated with the record | [optional] 
**RecordId** | Pointer to **int32** | Unique record ID | [optional] 
**RecordOid** | Pointer to **string** | Client-assigned record OID | [optional] 
**RecordType** | Pointer to **string** | Type of record (e.g., SUBJECT for subject-related forms) | [optional] 
**RecordStatus** | Pointer to **string** | Current status of the record (e.g., Record Incomplete, Record Complete) | [optional] 
**Deleted** | Pointer to **bool** | Whether the record is marked as deleted | [optional] 
**DateCreated** | Pointer to **string** | Date when this record was created | [optional] 
**DateModified** | Pointer to **string** | Date when this record was last modified | [optional] 
**SubjectId** | Pointer to **int32** | Mednet subject ID that this record is associated with | [optional] 
**SubjectOid** | Pointer to **string** | Client-assigned subject OID for the subject this record is associated with | [optional] 
**SubjectKey** | Pointer to **string** | Subject display ID that this record is associated with | [optional] 
**VisitId** | Pointer to **int32** | Visit instance ID that this record is associated with (if applicable) | [optional] 
**ParentRecordId** | Pointer to **int32** | Record ID of the parent record if this record is a subrecord (if applicable) | [optional] 
**Keywords** | Pointer to [**[]Keyword**](Keyword.md) | List of keywords associated with the record | [optional] 
**RecordData** | Pointer to **map[string]interface{}** | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. | [optional] 

## Methods

### NewRecord

`func NewRecord() *Record`

NewRecord instantiates a new Record object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRecordWithDefaults

`func NewRecordWithDefaults() *Record`

NewRecordWithDefaults instantiates a new Record object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Record) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Record) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Record) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Record) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetIntervalId

`func (o *Record) GetIntervalId() int32`

GetIntervalId returns the IntervalId field if non-nil, zero value otherwise.

### GetIntervalIdOk

`func (o *Record) GetIntervalIdOk() (*int32, bool)`

GetIntervalIdOk returns a tuple with the IntervalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalId

`func (o *Record) SetIntervalId(v int32)`

SetIntervalId sets IntervalId field to given value.

### HasIntervalId

`func (o *Record) HasIntervalId() bool`

HasIntervalId returns a boolean if a field has been set.

### GetFormId

`func (o *Record) GetFormId() int32`

GetFormId returns the FormId field if non-nil, zero value otherwise.

### GetFormIdOk

`func (o *Record) GetFormIdOk() (*int32, bool)`

GetFormIdOk returns a tuple with the FormId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormId

`func (o *Record) SetFormId(v int32)`

SetFormId sets FormId field to given value.

### HasFormId

`func (o *Record) HasFormId() bool`

HasFormId returns a boolean if a field has been set.

### GetFormKey

`func (o *Record) GetFormKey() string`

GetFormKey returns the FormKey field if non-nil, zero value otherwise.

### GetFormKeyOk

`func (o *Record) GetFormKeyOk() (*string, bool)`

GetFormKeyOk returns a tuple with the FormKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormKey

`func (o *Record) SetFormKey(v string)`

SetFormKey sets FormKey field to given value.

### HasFormKey

`func (o *Record) HasFormKey() bool`

HasFormKey returns a boolean if a field has been set.

### GetSiteId

`func (o *Record) GetSiteId() int32`

GetSiteId returns the SiteId field if non-nil, zero value otherwise.

### GetSiteIdOk

`func (o *Record) GetSiteIdOk() (*int32, bool)`

GetSiteIdOk returns a tuple with the SiteId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteId

`func (o *Record) SetSiteId(v int32)`

SetSiteId sets SiteId field to given value.

### HasSiteId

`func (o *Record) HasSiteId() bool`

HasSiteId returns a boolean if a field has been set.

### GetRecordId

`func (o *Record) GetRecordId() int32`

GetRecordId returns the RecordId field if non-nil, zero value otherwise.

### GetRecordIdOk

`func (o *Record) GetRecordIdOk() (*int32, bool)`

GetRecordIdOk returns a tuple with the RecordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordId

`func (o *Record) SetRecordId(v int32)`

SetRecordId sets RecordId field to given value.

### HasRecordId

`func (o *Record) HasRecordId() bool`

HasRecordId returns a boolean if a field has been set.

### GetRecordOid

`func (o *Record) GetRecordOid() string`

GetRecordOid returns the RecordOid field if non-nil, zero value otherwise.

### GetRecordOidOk

`func (o *Record) GetRecordOidOk() (*string, bool)`

GetRecordOidOk returns a tuple with the RecordOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordOid

`func (o *Record) SetRecordOid(v string)`

SetRecordOid sets RecordOid field to given value.

### HasRecordOid

`func (o *Record) HasRecordOid() bool`

HasRecordOid returns a boolean if a field has been set.

### GetRecordType

`func (o *Record) GetRecordType() string`

GetRecordType returns the RecordType field if non-nil, zero value otherwise.

### GetRecordTypeOk

`func (o *Record) GetRecordTypeOk() (*string, bool)`

GetRecordTypeOk returns a tuple with the RecordType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordType

`func (o *Record) SetRecordType(v string)`

SetRecordType sets RecordType field to given value.

### HasRecordType

`func (o *Record) HasRecordType() bool`

HasRecordType returns a boolean if a field has been set.

### GetRecordStatus

`func (o *Record) GetRecordStatus() string`

GetRecordStatus returns the RecordStatus field if non-nil, zero value otherwise.

### GetRecordStatusOk

`func (o *Record) GetRecordStatusOk() (*string, bool)`

GetRecordStatusOk returns a tuple with the RecordStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordStatus

`func (o *Record) SetRecordStatus(v string)`

SetRecordStatus sets RecordStatus field to given value.

### HasRecordStatus

`func (o *Record) HasRecordStatus() bool`

HasRecordStatus returns a boolean if a field has been set.

### GetDeleted

`func (o *Record) GetDeleted() bool`

GetDeleted returns the Deleted field if non-nil, zero value otherwise.

### GetDeletedOk

`func (o *Record) GetDeletedOk() (*bool, bool)`

GetDeletedOk returns a tuple with the Deleted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeleted

`func (o *Record) SetDeleted(v bool)`

SetDeleted sets Deleted field to given value.

### HasDeleted

`func (o *Record) HasDeleted() bool`

HasDeleted returns a boolean if a field has been set.

### GetDateCreated

`func (o *Record) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Record) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Record) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Record) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Record) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Record) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Record) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Record) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.

### GetSubjectId

`func (o *Record) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *Record) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *Record) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *Record) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectOid

`func (o *Record) GetSubjectOid() string`

GetSubjectOid returns the SubjectOid field if non-nil, zero value otherwise.

### GetSubjectOidOk

`func (o *Record) GetSubjectOidOk() (*string, bool)`

GetSubjectOidOk returns a tuple with the SubjectOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectOid

`func (o *Record) SetSubjectOid(v string)`

SetSubjectOid sets SubjectOid field to given value.

### HasSubjectOid

`func (o *Record) HasSubjectOid() bool`

HasSubjectOid returns a boolean if a field has been set.

### GetSubjectKey

`func (o *Record) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *Record) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *Record) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *Record) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetVisitId

`func (o *Record) GetVisitId() int32`

GetVisitId returns the VisitId field if non-nil, zero value otherwise.

### GetVisitIdOk

`func (o *Record) GetVisitIdOk() (*int32, bool)`

GetVisitIdOk returns a tuple with the VisitId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVisitId

`func (o *Record) SetVisitId(v int32)`

SetVisitId sets VisitId field to given value.

### HasVisitId

`func (o *Record) HasVisitId() bool`

HasVisitId returns a boolean if a field has been set.

### GetParentRecordId

`func (o *Record) GetParentRecordId() int32`

GetParentRecordId returns the ParentRecordId field if non-nil, zero value otherwise.

### GetParentRecordIdOk

`func (o *Record) GetParentRecordIdOk() (*int32, bool)`

GetParentRecordIdOk returns a tuple with the ParentRecordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetParentRecordId

`func (o *Record) SetParentRecordId(v int32)`

SetParentRecordId sets ParentRecordId field to given value.

### HasParentRecordId

`func (o *Record) HasParentRecordId() bool`

HasParentRecordId returns a boolean if a field has been set.

### GetKeywords

`func (o *Record) GetKeywords() []Keyword`

GetKeywords returns the Keywords field if non-nil, zero value otherwise.

### GetKeywordsOk

`func (o *Record) GetKeywordsOk() (*[]Keyword, bool)`

GetKeywordsOk returns a tuple with the Keywords field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKeywords

`func (o *Record) SetKeywords(v []Keyword)`

SetKeywords sets Keywords field to given value.

### HasKeywords

`func (o *Record) HasKeywords() bool`

HasKeywords returns a boolean if a field has been set.

### GetRecordData

`func (o *Record) GetRecordData() map[string]interface{}`

GetRecordData returns the RecordData field if non-nil, zero value otherwise.

### GetRecordDataOk

`func (o *Record) GetRecordDataOk() (*map[string]interface{}, bool)`

GetRecordDataOk returns a tuple with the RecordData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordData

`func (o *Record) SetRecordData(v map[string]interface{})`

SetRecordData sets RecordData field to given value.

### HasRecordData

`func (o *Record) HasRecordData() bool`

HasRecordData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


