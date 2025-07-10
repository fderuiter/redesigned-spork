# Subject

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**SubjectId** | Pointer to **int32** | Mednet subject ID (internal numeric ID) | [optional] 
**SubjectOid** | Pointer to **string** | Client-assigned subject object identifier (OID) | [optional] 
**SubjectKey** | Pointer to **string** | Protocol-assigned subject identifier (display ID) | [optional] 
**SubjectStatus** | Pointer to **string** | Current status of the subject (e.g., Enrolled) | [optional] 
**SiteId** | Pointer to **int32** | Mednet site ID the subject is associated with | [optional] 
**SiteName** | Pointer to **string** | Name of the site the subject is associated with | [optional] 
**Deleted** | Pointer to **bool** | Whether the subject is marked as deleted | [optional] 
**EnrollmentStartDate** | Pointer to **string** | Subject’s enrollment start date | [optional] 
**DateCreated** | Pointer to **string** | Date when this subject record was created | [optional] 
**DateModified** | Pointer to **string** | Date when this subject record was last modified | [optional] 
**Keywords** | Pointer to [**[]Keyword**](Keyword.md) | List of keywords associated with the subject | [optional] 

## Methods

### NewSubject

`func NewSubject() *Subject`

NewSubject instantiates a new Subject object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSubjectWithDefaults

`func NewSubjectWithDefaults() *Subject`

NewSubjectWithDefaults instantiates a new Subject object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Subject) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Subject) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Subject) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Subject) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetSubjectId

`func (o *Subject) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *Subject) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *Subject) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *Subject) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectOid

`func (o *Subject) GetSubjectOid() string`

GetSubjectOid returns the SubjectOid field if non-nil, zero value otherwise.

### GetSubjectOidOk

`func (o *Subject) GetSubjectOidOk() (*string, bool)`

GetSubjectOidOk returns a tuple with the SubjectOid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectOid

`func (o *Subject) SetSubjectOid(v string)`

SetSubjectOid sets SubjectOid field to given value.

### HasSubjectOid

`func (o *Subject) HasSubjectOid() bool`

HasSubjectOid returns a boolean if a field has been set.

### GetSubjectKey

`func (o *Subject) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *Subject) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *Subject) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *Subject) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetSubjectStatus

`func (o *Subject) GetSubjectStatus() string`

GetSubjectStatus returns the SubjectStatus field if non-nil, zero value otherwise.

### GetSubjectStatusOk

`func (o *Subject) GetSubjectStatusOk() (*string, bool)`

GetSubjectStatusOk returns a tuple with the SubjectStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectStatus

`func (o *Subject) SetSubjectStatus(v string)`

SetSubjectStatus sets SubjectStatus field to given value.

### HasSubjectStatus

`func (o *Subject) HasSubjectStatus() bool`

HasSubjectStatus returns a boolean if a field has been set.

### GetSiteId

`func (o *Subject) GetSiteId() int32`

GetSiteId returns the SiteId field if non-nil, zero value otherwise.

### GetSiteIdOk

`func (o *Subject) GetSiteIdOk() (*int32, bool)`

GetSiteIdOk returns a tuple with the SiteId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteId

`func (o *Subject) SetSiteId(v int32)`

SetSiteId sets SiteId field to given value.

### HasSiteId

`func (o *Subject) HasSiteId() bool`

HasSiteId returns a boolean if a field has been set.

### GetSiteName

`func (o *Subject) GetSiteName() string`

GetSiteName returns the SiteName field if non-nil, zero value otherwise.

### GetSiteNameOk

`func (o *Subject) GetSiteNameOk() (*string, bool)`

GetSiteNameOk returns a tuple with the SiteName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteName

`func (o *Subject) SetSiteName(v string)`

SetSiteName sets SiteName field to given value.

### HasSiteName

`func (o *Subject) HasSiteName() bool`

HasSiteName returns a boolean if a field has been set.

### GetDeleted

`func (o *Subject) GetDeleted() bool`

GetDeleted returns the Deleted field if non-nil, zero value otherwise.

### GetDeletedOk

`func (o *Subject) GetDeletedOk() (*bool, bool)`

GetDeletedOk returns a tuple with the Deleted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeleted

`func (o *Subject) SetDeleted(v bool)`

SetDeleted sets Deleted field to given value.

### HasDeleted

`func (o *Subject) HasDeleted() bool`

HasDeleted returns a boolean if a field has been set.

### GetEnrollmentStartDate

`func (o *Subject) GetEnrollmentStartDate() string`

GetEnrollmentStartDate returns the EnrollmentStartDate field if non-nil, zero value otherwise.

### GetEnrollmentStartDateOk

`func (o *Subject) GetEnrollmentStartDateOk() (*string, bool)`

GetEnrollmentStartDateOk returns a tuple with the EnrollmentStartDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnrollmentStartDate

`func (o *Subject) SetEnrollmentStartDate(v string)`

SetEnrollmentStartDate sets EnrollmentStartDate field to given value.

### HasEnrollmentStartDate

`func (o *Subject) HasEnrollmentStartDate() bool`

HasEnrollmentStartDate returns a boolean if a field has been set.

### GetDateCreated

`func (o *Subject) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Subject) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Subject) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Subject) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Subject) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Subject) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Subject) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Subject) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.

### GetKeywords

`func (o *Subject) GetKeywords() []Keyword`

GetKeywords returns the Keywords field if non-nil, zero value otherwise.

### GetKeywordsOk

`func (o *Subject) GetKeywordsOk() (*[]Keyword, bool)`

GetKeywordsOk returns a tuple with the Keywords field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKeywords

`func (o *Subject) SetKeywords(v []Keyword)`

SetKeywords sets Keywords field to given value.

### HasKeywords

`func (o *Subject) HasKeywords() bool`

HasKeywords returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


