# Study

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SponsorKey** | Pointer to **string** | Sponsor key that this study belongs to | [optional] 
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**StudyId** | Pointer to **int32** | Mednet study ID (internal numeric identifier) | [optional] 
**StudyName** | Pointer to **string** | Name of the study | [optional] 
**StudyDescription** | Pointer to **string** | Description of the study | [optional] 
**StudyType** | Pointer to **string** | Type of study (e.g., STUDY) | [optional] 
**DateCreated** | Pointer to **string** | Date when the study record was created | [optional] 
**DateModified** | Pointer to **string** | Date when the study record was last modified | [optional] 

## Methods

### NewStudy

`func NewStudy() *Study`

NewStudy instantiates a new Study object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStudyWithDefaults

`func NewStudyWithDefaults() *Study`

NewStudyWithDefaults instantiates a new Study object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSponsorKey

`func (o *Study) GetSponsorKey() string`

GetSponsorKey returns the SponsorKey field if non-nil, zero value otherwise.

### GetSponsorKeyOk

`func (o *Study) GetSponsorKeyOk() (*string, bool)`

GetSponsorKeyOk returns a tuple with the SponsorKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSponsorKey

`func (o *Study) SetSponsorKey(v string)`

SetSponsorKey sets SponsorKey field to given value.

### HasSponsorKey

`func (o *Study) HasSponsorKey() bool`

HasSponsorKey returns a boolean if a field has been set.

### GetStudyKey

`func (o *Study) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Study) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Study) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Study) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetStudyId

`func (o *Study) GetStudyId() int32`

GetStudyId returns the StudyId field if non-nil, zero value otherwise.

### GetStudyIdOk

`func (o *Study) GetStudyIdOk() (*int32, bool)`

GetStudyIdOk returns a tuple with the StudyId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyId

`func (o *Study) SetStudyId(v int32)`

SetStudyId sets StudyId field to given value.

### HasStudyId

`func (o *Study) HasStudyId() bool`

HasStudyId returns a boolean if a field has been set.

### GetStudyName

`func (o *Study) GetStudyName() string`

GetStudyName returns the StudyName field if non-nil, zero value otherwise.

### GetStudyNameOk

`func (o *Study) GetStudyNameOk() (*string, bool)`

GetStudyNameOk returns a tuple with the StudyName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyName

`func (o *Study) SetStudyName(v string)`

SetStudyName sets StudyName field to given value.

### HasStudyName

`func (o *Study) HasStudyName() bool`

HasStudyName returns a boolean if a field has been set.

### GetStudyDescription

`func (o *Study) GetStudyDescription() string`

GetStudyDescription returns the StudyDescription field if non-nil, zero value otherwise.

### GetStudyDescriptionOk

`func (o *Study) GetStudyDescriptionOk() (*string, bool)`

GetStudyDescriptionOk returns a tuple with the StudyDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyDescription

`func (o *Study) SetStudyDescription(v string)`

SetStudyDescription sets StudyDescription field to given value.

### HasStudyDescription

`func (o *Study) HasStudyDescription() bool`

HasStudyDescription returns a boolean if a field has been set.

### GetStudyType

`func (o *Study) GetStudyType() string`

GetStudyType returns the StudyType field if non-nil, zero value otherwise.

### GetStudyTypeOk

`func (o *Study) GetStudyTypeOk() (*string, bool)`

GetStudyTypeOk returns a tuple with the StudyType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyType

`func (o *Study) SetStudyType(v string)`

SetStudyType sets StudyType field to given value.

### HasStudyType

`func (o *Study) HasStudyType() bool`

HasStudyType returns a boolean if a field has been set.

### GetDateCreated

`func (o *Study) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Study) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Study) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Study) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Study) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Study) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Study) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Study) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


