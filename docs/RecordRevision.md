# RecordRevision

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**RecordRevisionId** | Pointer to **int32** | Unique system identifier for the record revision | [optional] 
**RecordId** | Pointer to **int32** | Unique system identifier of the related record | [optional] 
**RecordOid** | Pointer to **string** | Client-assigned record OID (if any) | [optional] 
**RecordRevision** | Pointer to **int32** | Revision number of the record (version of the record status) | [optional] 
**DataRevision** | Pointer to **int32** | Revision number of the data within the record | [optional] 
**RecordStatus** | Pointer to **string** | Status of the record at this revision (user-defined status label) | [optional] 
**SubjectId** | Pointer to **int32** | Mednet subject ID related to the record | [optional] 
**SubjectOid** | Pointer to **string** | Client-assigned subject OID related to the record | [optional] 
**SubjectKey** | Pointer to **string** | Subject display ID related to the record | [optional] 
**SiteId** | Pointer to **int32** | Site ID related to the record | [optional] 
**FormKey** | Pointer to **string** | Form key of the form that the record belongs to | [optional] 
**IntervalId** | Pointer to **int32** | Interval ID (visit definition) related to the record | [optional] 
**Role** | Pointer to **string** | Role name of the user who saved the record revision | [optional] 
**User** | Pointer to **string** | Username of the user who saved the record revision | [optional] 
**ReasonForChange** | Pointer to **string** | Reason for change, if provided (for audit trail) | [optional] 
**Deleted** | Pointer to **bool** | Whether the record was deleted in this revision | [optional] 
**DateCreated** | Pointer to **string** | Date when this record revision was created | [optional] 

## Methods

### NewRecordRevision

`func NewRecordRevision() *RecordRevision`

NewRecordRevision instantiates a new RecordRevision object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRecordRevisionWithDefaults

`func NewRecordRevisionWithDefaults() *RecordRevision`

NewRecordRevisionWithDefaults instantiates a new RecordRevision object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *RecordRevision) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *RecordRevision) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *RecordRevision) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *RecordRevision) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetRecordRevisionId

`func (o *RecordRevision) GetRecordRevisionId() int32`

GetRecordRevisionId returns the RecordRevisionId field if non-nil, zero value otherwise.

### GetRecordRevisionIdOk

`func (o *RecordRevision) GetRecordRevisionIdOk() (*int32, bool)`

GetRecordRevisionIdOk returns a tuple with the RecordRevisionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordRevisionId

`func (o *RecordRevision) SetRecordRevisionId(v int32)`

SetRecordRevisionId sets RecordRevisionId field to given value.

### HasRecordRevisionId

`func (o *RecordRevision) HasRecordRevisionId() bool`

HasRecordRevisionId returns a boolean if a field has been set.

### GetRecordId

`func (o *RecordRevision) GetRecordId() int32`

GetRecordId returns the RecordId field if non-nil, zero value otherwise.

### GetRecordIdOk

`func (o *RecordRevision) GetRecordIdOk() (*int32, bool)`

GetRecordIdOk returns a tuple with the RecordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordId

`func (o *RecordRevision) SetRecordId(v int32)`

SetRecordId sets RecordId field to given value.

### HasRecordId

`func (o *RecordRevision) HasRecordId() bool`

HasRecordId returns a boolean if a field has been set.

### GetRecordOid

`func (o *RecordRevision) GetRecordOid() string`

GetRecordOid returns the RecordOid field if non-nil, zero value otherwise.

### GetRecordOidOk

`func (o *RecordRevision) GetRecordOidOk() (*string, bool)`

GetRecordOidOk returns a tuple with the RecordOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordOid

`func (o *RecordRevision) SetRecordOid(v string)`

SetRecordOid sets RecordOid field to given value.

### HasRecordOid

`func (o *RecordRevision) HasRecordOid() bool`

HasRecordOid returns a boolean if a field has been set.

### GetRecordRevision

`func (o *RecordRevision) GetRecordRevision() int32`

GetRecordRevision returns the RecordRevision field if non-nil, zero value otherwise.

### GetRecordRevisionOk

`func (o *RecordRevision) GetRecordRevisionOk() (*int32, bool)`

GetRecordRevisionOk returns a tuple with the RecordRevision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordRevision

`func (o *RecordRevision) SetRecordRevision(v int32)`

SetRecordRevision sets RecordRevision field to given value.

### HasRecordRevision

`func (o *RecordRevision) HasRecordRevision() bool`

HasRecordRevision returns a boolean if a field has been set.

### GetDataRevision

`func (o *RecordRevision) GetDataRevision() int32`

GetDataRevision returns the DataRevision field if non-nil, zero value otherwise.

### GetDataRevisionOk

`func (o *RecordRevision) GetDataRevisionOk() (*int32, bool)`

GetDataRevisionOk returns a tuple with the DataRevision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataRevision

`func (o *RecordRevision) SetDataRevision(v int32)`

SetDataRevision sets DataRevision field to given value.

### HasDataRevision

`func (o *RecordRevision) HasDataRevision() bool`

HasDataRevision returns a boolean if a field has been set.

### GetRecordStatus

`func (o *RecordRevision) GetRecordStatus() string`

GetRecordStatus returns the RecordStatus field if non-nil, zero value otherwise.

### GetRecordStatusOk

`func (o *RecordRevision) GetRecordStatusOk() (*string, bool)`

GetRecordStatusOk returns a tuple with the RecordStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordStatus

`func (o *RecordRevision) SetRecordStatus(v string)`

SetRecordStatus sets RecordStatus field to given value.

### HasRecordStatus

`func (o *RecordRevision) HasRecordStatus() bool`

HasRecordStatus returns a boolean if a field has been set.

### GetSubjectId

`func (o *RecordRevision) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *RecordRevision) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *RecordRevision) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *RecordRevision) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectOid

`func (o *RecordRevision) GetSubjectOid() string`

GetSubjectOid returns the SubjectOid field if non-nil, zero value otherwise.

### GetSubjectOidOk

`func (o *RecordRevision) GetSubjectOidOk() (*string, bool)`

GetSubjectOidOk returns a tuple with the SubjectOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectOid

`func (o *RecordRevision) SetSubjectOid(v string)`

SetSubjectOid sets SubjectOid field to given value.

### HasSubjectOid

`func (o *RecordRevision) HasSubjectOid() bool`

HasSubjectOid returns a boolean if a field has been set.

### GetSubjectKey

`func (o *RecordRevision) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *RecordRevision) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *RecordRevision) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *RecordRevision) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetSiteId

`func (o *RecordRevision) GetSiteId() int32`

GetSiteId returns the SiteId field if non-nil, zero value otherwise.

### GetSiteIdOk

`func (o *RecordRevision) GetSiteIdOk() (*int32, bool)`

GetSiteIdOk returns a tuple with the SiteId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteId

`func (o *RecordRevision) SetSiteId(v int32)`

SetSiteId sets SiteId field to given value.

### HasSiteId

`func (o *RecordRevision) HasSiteId() bool`

HasSiteId returns a boolean if a field has been set.

### GetFormKey

`func (o *RecordRevision) GetFormKey() string`

GetFormKey returns the FormKey field if non-nil, zero value otherwise.

### GetFormKeyOk

`func (o *RecordRevision) GetFormKeyOk() (*string, bool)`

GetFormKeyOk returns a tuple with the FormKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormKey

`func (o *RecordRevision) SetFormKey(v string)`

SetFormKey sets FormKey field to given value.

### HasFormKey

`func (o *RecordRevision) HasFormKey() bool`

HasFormKey returns a boolean if a field has been set.

### GetIntervalId

`func (o *RecordRevision) GetIntervalId() int32`

GetIntervalId returns the IntervalId field if non-nil, zero value otherwise.

### GetIntervalIdOk

`func (o *RecordRevision) GetIntervalIdOk() (*int32, bool)`

GetIntervalIdOk returns a tuple with the IntervalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntervalId

`func (o *RecordRevision) SetIntervalId(v int32)`

SetIntervalId sets IntervalId field to given value.

### HasIntervalId

`func (o *RecordRevision) HasIntervalId() bool`

HasIntervalId returns a boolean if a field has been set.

### GetRole

`func (o *RecordRevision) GetRole() string`

GetRole returns the Role field if non-nil, zero value otherwise.

### GetRoleOk

`func (o *RecordRevision) GetRoleOk() (*string, bool)`

GetRoleOk returns a tuple with the Role field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRole

`func (o *RecordRevision) SetRole(v string)`

SetRole sets Role field to given value.

### HasRole

`func (o *RecordRevision) HasRole() bool`

HasRole returns a boolean if a field has been set.

### GetUser

`func (o *RecordRevision) GetUser() string`

GetUser returns the User field if non-nil, zero value otherwise.

### GetUserOk

`func (o *RecordRevision) GetUserOk() (*string, bool)`

GetUserOk returns a tuple with the User field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUser

`func (o *RecordRevision) SetUser(v string)`

SetUser sets User field to given value.

### HasUser

`func (o *RecordRevision) HasUser() bool`

HasUser returns a boolean if a field has been set.

### GetReasonForChange

`func (o *RecordRevision) GetReasonForChange() string`

GetReasonForChange returns the ReasonForChange field if non-nil, zero value otherwise.

### GetReasonForChangeOk

`func (o *RecordRevision) GetReasonForChangeOk() (*string, bool)`

GetReasonForChangeOk returns a tuple with the ReasonForChange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReasonForChange

`func (o *RecordRevision) SetReasonForChange(v string)`

SetReasonForChange sets ReasonForChange field to given value.

### HasReasonForChange

`func (o *RecordRevision) HasReasonForChange() bool`

HasReasonForChange returns a boolean if a field has been set.

### GetDeleted

`func (o *RecordRevision) GetDeleted() bool`

GetDeleted returns the Deleted field if non-nil, zero value otherwise.

### GetDeletedOk

`func (o *RecordRevision) GetDeletedOk() (*bool, bool)`

GetDeletedOk returns a tuple with the Deleted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeleted

`func (o *RecordRevision) SetDeleted(v bool)`

SetDeleted sets Deleted field to given value.

### HasDeleted

`func (o *RecordRevision) HasDeleted() bool`

HasDeleted returns a boolean if a field has been set.

### GetDateCreated

`func (o *RecordRevision) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *RecordRevision) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *RecordRevision) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *RecordRevision) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


