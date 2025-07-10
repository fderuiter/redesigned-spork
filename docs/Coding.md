# Coding

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**SiteName** | Pointer to **string** | Name of the site associated with the coded data | [optional] 
**SiteId** | Pointer to **int32** | Site ID associated with the coded data | [optional] 
**SubjectId** | Pointer to **int32** | Subject ID associated with the coded data | [optional] 
**SubjectKey** | Pointer to **string** | Subject key (display ID) associated with the coded data | [optional] 
**FormId** | Pointer to **int32** | Form ID where the coded data originates | [optional] 
**FormName** | Pointer to **string** | Name of the form where the coded data originates | [optional] 
**FormKey** | Pointer to **string** | Form key where the coded data originates | [optional] 
**Revision** | Pointer to **int32** | Revision number of the coding entry | [optional] 
**RecordId** | Pointer to **int32** | Record ID associated with the coded data | [optional] 
**Variable** | Pointer to **string** | Variable name (field) that was coded | [optional] 
**Value** | Pointer to **string** | Original value entered that required coding | [optional] 
**CodingId** | Pointer to **int32** | Mednet coding ID | [optional] 
**Code** | Pointer to **string** | Standardized code assigned (e.g., dictionary term) | [optional] 
**CodedBy** | Pointer to **string** | Name of the user who performed the coding | [optional] 
**Reason** | Pointer to **string** | Reason for coding or any notes on changes | [optional] 
**DictionaryName** | Pointer to **string** | Name of the dictionary used (e.g., MedDRA) | [optional] 
**DictionaryVersion** | Pointer to **string** | Version of the dictionary used | [optional] 
**DateCoded** | Pointer to **string** | Date when the coding was performed | [optional] 

## Methods

### NewCoding

`func NewCoding() *Coding`

NewCoding instantiates a new Coding object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCodingWithDefaults

`func NewCodingWithDefaults() *Coding`

NewCodingWithDefaults instantiates a new Coding object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Coding) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Coding) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Coding) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Coding) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetSiteName

`func (o *Coding) GetSiteName() string`

GetSiteName returns the SiteName field if non-nil, zero value otherwise.

### GetSiteNameOk

`func (o *Coding) GetSiteNameOk() (*string, bool)`

GetSiteNameOk returns a tuple with the SiteName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteName

`func (o *Coding) SetSiteName(v string)`

SetSiteName sets SiteName field to given value.

### HasSiteName

`func (o *Coding) HasSiteName() bool`

HasSiteName returns a boolean if a field has been set.

### GetSiteId

`func (o *Coding) GetSiteId() int32`

GetSiteId returns the SiteId field if non-nil, zero value otherwise.

### GetSiteIdOk

`func (o *Coding) GetSiteIdOk() (*int32, bool)`

GetSiteIdOk returns a tuple with the SiteId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSiteId

`func (o *Coding) SetSiteId(v int32)`

SetSiteId sets SiteId field to given value.

### HasSiteId

`func (o *Coding) HasSiteId() bool`

HasSiteId returns a boolean if a field has been set.

### GetSubjectId

`func (o *Coding) GetSubjectId() int32`

GetSubjectId returns the SubjectId field if non-nil, zero value otherwise.

### GetSubjectIdOk

`func (o *Coding) GetSubjectIdOk() (*int32, bool)`

GetSubjectIdOk returns a tuple with the SubjectId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectId

`func (o *Coding) SetSubjectId(v int32)`

SetSubjectId sets SubjectId field to given value.

### HasSubjectId

`func (o *Coding) HasSubjectId() bool`

HasSubjectId returns a boolean if a field has been set.

### GetSubjectKey

`func (o *Coding) GetSubjectKey() string`

GetSubjectKey returns the SubjectKey field if non-nil, zero value otherwise.

### GetSubjectKeyOk

`func (o *Coding) GetSubjectKeyOk() (*string, bool)`

GetSubjectKeyOk returns a tuple with the SubjectKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectKey

`func (o *Coding) SetSubjectKey(v string)`

SetSubjectKey sets SubjectKey field to given value.

### HasSubjectKey

`func (o *Coding) HasSubjectKey() bool`

HasSubjectKey returns a boolean if a field has been set.

### GetFormId

`func (o *Coding) GetFormId() int32`

GetFormId returns the FormId field if non-nil, zero value otherwise.

### GetFormIdOk

`func (o *Coding) GetFormIdOk() (*int32, bool)`

GetFormIdOk returns a tuple with the FormId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormId

`func (o *Coding) SetFormId(v int32)`

SetFormId sets FormId field to given value.

### HasFormId

`func (o *Coding) HasFormId() bool`

HasFormId returns a boolean if a field has been set.

### GetFormName

`func (o *Coding) GetFormName() string`

GetFormName returns the FormName field if non-nil, zero value otherwise.

### GetFormNameOk

`func (o *Coding) GetFormNameOk() (*string, bool)`

GetFormNameOk returns a tuple with the FormName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormName

`func (o *Coding) SetFormName(v string)`

SetFormName sets FormName field to given value.

### HasFormName

`func (o *Coding) HasFormName() bool`

HasFormName returns a boolean if a field has been set.

### GetFormKey

`func (o *Coding) GetFormKey() string`

GetFormKey returns the FormKey field if non-nil, zero value otherwise.

### GetFormKeyOk

`func (o *Coding) GetFormKeyOk() (*string, bool)`

GetFormKeyOk returns a tuple with the FormKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormKey

`func (o *Coding) SetFormKey(v string)`

SetFormKey sets FormKey field to given value.

### HasFormKey

`func (o *Coding) HasFormKey() bool`

HasFormKey returns a boolean if a field has been set.

### GetRevision

`func (o *Coding) GetRevision() int32`

GetRevision returns the Revision field if non-nil, zero value otherwise.

### GetRevisionOk

`func (o *Coding) GetRevisionOk() (*int32, bool)`

GetRevisionOk returns a tuple with the Revision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRevision

`func (o *Coding) SetRevision(v int32)`

SetRevision sets Revision field to given value.

### HasRevision

`func (o *Coding) HasRevision() bool`

HasRevision returns a boolean if a field has been set.

### GetRecordId

`func (o *Coding) GetRecordId() int32`

GetRecordId returns the RecordId field if non-nil, zero value otherwise.

### GetRecordIdOk

`func (o *Coding) GetRecordIdOk() (*int32, bool)`

GetRecordIdOk returns a tuple with the RecordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRecordId

`func (o *Coding) SetRecordId(v int32)`

SetRecordId sets RecordId field to given value.

### HasRecordId

`func (o *Coding) HasRecordId() bool`

HasRecordId returns a boolean if a field has been set.

### GetVariable

`func (o *Coding) GetVariable() string`

GetVariable returns the Variable field if non-nil, zero value otherwise.

### GetVariableOk

`func (o *Coding) GetVariableOk() (*string, bool)`

GetVariableOk returns a tuple with the Variable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVariable

`func (o *Coding) SetVariable(v string)`

SetVariable sets Variable field to given value.

### HasVariable

`func (o *Coding) HasVariable() bool`

HasVariable returns a boolean if a field has been set.

### GetValue

`func (o *Coding) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *Coding) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *Coding) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *Coding) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetCodingId

`func (o *Coding) GetCodingId() int32`

GetCodingId returns the CodingId field if non-nil, zero value otherwise.

### GetCodingIdOk

`func (o *Coding) GetCodingIdOk() (*int32, bool)`

GetCodingIdOk returns a tuple with the CodingId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCodingId

`func (o *Coding) SetCodingId(v int32)`

SetCodingId sets CodingId field to given value.

### HasCodingId

`func (o *Coding) HasCodingId() bool`

HasCodingId returns a boolean if a field has been set.

### GetCode

`func (o *Coding) GetCode() string`

GetCode returns the Code field if non-nil, zero value otherwise.

### GetCodeOk

`func (o *Coding) GetCodeOk() (*string, bool)`

GetCodeOk returns a tuple with the Code field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCode

`func (o *Coding) SetCode(v string)`

SetCode sets Code field to given value.

### HasCode

`func (o *Coding) HasCode() bool`

HasCode returns a boolean if a field has been set.

### GetCodedBy

`func (o *Coding) GetCodedBy() string`

GetCodedBy returns the CodedBy field if non-nil, zero value otherwise.

### GetCodedByOk

`func (o *Coding) GetCodedByOk() (*string, bool)`

GetCodedByOk returns a tuple with the CodedBy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCodedBy

`func (o *Coding) SetCodedBy(v string)`

SetCodedBy sets CodedBy field to given value.

### HasCodedBy

`func (o *Coding) HasCodedBy() bool`

HasCodedBy returns a boolean if a field has been set.

### GetReason

`func (o *Coding) GetReason() string`

GetReason returns the Reason field if non-nil, zero value otherwise.

### GetReasonOk

`func (o *Coding) GetReasonOk() (*string, bool)`

GetReasonOk returns a tuple with the Reason field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReason

`func (o *Coding) SetReason(v string)`

SetReason sets Reason field to given value.

### HasReason

`func (o *Coding) HasReason() bool`

HasReason returns a boolean if a field has been set.

### GetDictionaryName

`func (o *Coding) GetDictionaryName() string`

GetDictionaryName returns the DictionaryName field if non-nil, zero value otherwise.

### GetDictionaryNameOk

`func (o *Coding) GetDictionaryNameOk() (*string, bool)`

GetDictionaryNameOk returns a tuple with the DictionaryName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDictionaryName

`func (o *Coding) SetDictionaryName(v string)`

SetDictionaryName sets DictionaryName field to given value.

### HasDictionaryName

`func (o *Coding) HasDictionaryName() bool`

HasDictionaryName returns a boolean if a field has been set.

### GetDictionaryVersion

`func (o *Coding) GetDictionaryVersion() string`

GetDictionaryVersion returns the DictionaryVersion field if non-nil, zero value otherwise.

### GetDictionaryVersionOk

`func (o *Coding) GetDictionaryVersionOk() (*string, bool)`

GetDictionaryVersionOk returns a tuple with the DictionaryVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDictionaryVersion

`func (o *Coding) SetDictionaryVersion(v string)`

SetDictionaryVersion sets DictionaryVersion field to given value.

### HasDictionaryVersion

`func (o *Coding) HasDictionaryVersion() bool`

HasDictionaryVersion returns a boolean if a field has been set.

### GetDateCoded

`func (o *Coding) GetDateCoded() string`

GetDateCoded returns the DateCoded field if non-nil, zero value otherwise.

### GetDateCodedOk

`func (o *Coding) GetDateCodedOk() (*string, bool)`

GetDateCodedOk returns a tuple with the DateCoded field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCoded

`func (o *Coding) SetDateCoded(v string)`

SetDateCoded sets DateCoded field to given value.

### HasDateCoded

`func (o *Coding) HasDateCoded() bool`

HasDateCoded returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


