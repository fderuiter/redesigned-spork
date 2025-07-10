# Form

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StudyKey** | Pointer to **string** | Unique study key | [optional] 
**FormId** | Pointer to **int32** | Mednet Form ID | [optional] 
**FormKey** | Pointer to **string** | User-defined form key | [optional] 
**FormName** | Pointer to **string** | Name of the form (eCRF) | [optional] 
**FormType** | Pointer to **string** | Type of the form (e.g., Subject or Site) | [optional] 
**Revision** | Pointer to **int32** | Number of modifications (revisions) of the form metadata | [optional] 
**EmbeddedLog** | Pointer to **bool** | Whether the form has an embedded log | [optional] 
**EnforceOwnership** | Pointer to **bool** | Whether the form enforces record ownership | [optional] 
**UserAgreement** | Pointer to **bool** | Whether the form requires a user agreement | [optional] 
**SubjectRecordReport** | Pointer to **bool** | Whether the form is marked as a subject record report | [optional] 
**UnscheduledVisit** | Pointer to **bool** | Whether the form is included in unscheduled visits | [optional] 
**OtherForms** | Pointer to **bool** | Whether the form is included in Other Forms category | [optional] 
**EproForm** | Pointer to **bool** | Whether the form is an ePRO (electronic patient reported outcome) form | [optional] 
**AllowCopy** | Pointer to **bool** | Whether the form allows copying of data | [optional] 
**Disabled** | Pointer to **bool** | Whether the form is soft-deleted (disabled) | [optional] 
**DateCreated** | Pointer to **string** | Date when this form was created | [optional] 
**DateModified** | Pointer to **string** | Date when this form was last modified | [optional] 

## Methods

### NewForm

`func NewForm() *Form`

NewForm instantiates a new Form object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewFormWithDefaults

`func NewFormWithDefaults() *Form`

NewFormWithDefaults instantiates a new Form object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStudyKey

`func (o *Form) GetStudyKey() string`

GetStudyKey returns the StudyKey field if non-nil, zero value otherwise.

### GetStudyKeyOk

`func (o *Form) GetStudyKeyOk() (*string, bool)`

GetStudyKeyOk returns a tuple with the StudyKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStudyKey

`func (o *Form) SetStudyKey(v string)`

SetStudyKey sets StudyKey field to given value.

### HasStudyKey

`func (o *Form) HasStudyKey() bool`

HasStudyKey returns a boolean if a field has been set.

### GetFormId

`func (o *Form) GetFormId() int32`

GetFormId returns the FormId field if non-nil, zero value otherwise.

### GetFormIdOk

`func (o *Form) GetFormIdOk() (*int32, bool)`

GetFormIdOk returns a tuple with the FormId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormId

`func (o *Form) SetFormId(v int32)`

SetFormId sets FormId field to given value.

### HasFormId

`func (o *Form) HasFormId() bool`

HasFormId returns a boolean if a field has been set.

### GetFormKey

`func (o *Form) GetFormKey() string`

GetFormKey returns the FormKey field if non-nil, zero value otherwise.

### GetFormKeyOk

`func (o *Form) GetFormKeyOk() (*string, bool)`

GetFormKeyOk returns a tuple with the FormKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormKey

`func (o *Form) SetFormKey(v string)`

SetFormKey sets FormKey field to given value.

### HasFormKey

`func (o *Form) HasFormKey() bool`

HasFormKey returns a boolean if a field has been set.

### GetFormName

`func (o *Form) GetFormName() string`

GetFormName returns the FormName field if non-nil, zero value otherwise.

### GetFormNameOk

`func (o *Form) GetFormNameOk() (*string, bool)`

GetFormNameOk returns a tuple with the FormName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormName

`func (o *Form) SetFormName(v string)`

SetFormName sets FormName field to given value.

### HasFormName

`func (o *Form) HasFormName() bool`

HasFormName returns a boolean if a field has been set.

### GetFormType

`func (o *Form) GetFormType() string`

GetFormType returns the FormType field if non-nil, zero value otherwise.

### GetFormTypeOk

`func (o *Form) GetFormTypeOk() (*string, bool)`

GetFormTypeOk returns a tuple with the FormType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormType

`func (o *Form) SetFormType(v string)`

SetFormType sets FormType field to given value.

### HasFormType

`func (o *Form) HasFormType() bool`

HasFormType returns a boolean if a field has been set.

### GetRevision

`func (o *Form) GetRevision() int32`

GetRevision returns the Revision field if non-nil, zero value otherwise.

### GetRevisionOk

`func (o *Form) GetRevisionOk() (*int32, bool)`

GetRevisionOk returns a tuple with the Revision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRevision

`func (o *Form) SetRevision(v int32)`

SetRevision sets Revision field to given value.

### HasRevision

`func (o *Form) HasRevision() bool`

HasRevision returns a boolean if a field has been set.

### GetEmbeddedLog

`func (o *Form) GetEmbeddedLog() bool`

GetEmbeddedLog returns the EmbeddedLog field if non-nil, zero value otherwise.

### GetEmbeddedLogOk

`func (o *Form) GetEmbeddedLogOk() (*bool, bool)`

GetEmbeddedLogOk returns a tuple with the EmbeddedLog field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmbeddedLog

`func (o *Form) SetEmbeddedLog(v bool)`

SetEmbeddedLog sets EmbeddedLog field to given value.

### HasEmbeddedLog

`func (o *Form) HasEmbeddedLog() bool`

HasEmbeddedLog returns a boolean if a field has been set.

### GetEnforceOwnership

`func (o *Form) GetEnforceOwnership() bool`

GetEnforceOwnership returns the EnforceOwnership field if non-nil, zero value otherwise.

### GetEnforceOwnershipOk

`func (o *Form) GetEnforceOwnershipOk() (*bool, bool)`

GetEnforceOwnershipOk returns a tuple with the EnforceOwnership field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnforceOwnership

`func (o *Form) SetEnforceOwnership(v bool)`

SetEnforceOwnership sets EnforceOwnership field to given value.

### HasEnforceOwnership

`func (o *Form) HasEnforceOwnership() bool`

HasEnforceOwnership returns a boolean if a field has been set.

### GetUserAgreement

`func (o *Form) GetUserAgreement() bool`

GetUserAgreement returns the UserAgreement field if non-nil, zero value otherwise.

### GetUserAgreementOk

`func (o *Form) GetUserAgreementOk() (*bool, bool)`

GetUserAgreementOk returns a tuple with the UserAgreement field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUserAgreement

`func (o *Form) SetUserAgreement(v bool)`

SetUserAgreement sets UserAgreement field to given value.

### HasUserAgreement

`func (o *Form) HasUserAgreement() bool`

HasUserAgreement returns a boolean if a field has been set.

### GetSubjectRecordReport

`func (o *Form) GetSubjectRecordReport() bool`

GetSubjectRecordReport returns the SubjectRecordReport field if non-nil, zero value otherwise.

### GetSubjectRecordReportOk

`func (o *Form) GetSubjectRecordReportOk() (*bool, bool)`

GetSubjectRecordReportOk returns a tuple with the SubjectRecordReport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubjectRecordReport

`func (o *Form) SetSubjectRecordReport(v bool)`

SetSubjectRecordReport sets SubjectRecordReport field to given value.

### HasSubjectRecordReport

`func (o *Form) HasSubjectRecordReport() bool`

HasSubjectRecordReport returns a boolean if a field has been set.

### GetUnscheduledVisit

`func (o *Form) GetUnscheduledVisit() bool`

GetUnscheduledVisit returns the UnscheduledVisit field if non-nil, zero value otherwise.

### GetUnscheduledVisitOk

`func (o *Form) GetUnscheduledVisitOk() (*bool, bool)`

GetUnscheduledVisitOk returns a tuple with the UnscheduledVisit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnscheduledVisit

`func (o *Form) SetUnscheduledVisit(v bool)`

SetUnscheduledVisit sets UnscheduledVisit field to given value.

### HasUnscheduledVisit

`func (o *Form) HasUnscheduledVisit() bool`

HasUnscheduledVisit returns a boolean if a field has been set.

### GetOtherForms

`func (o *Form) GetOtherForms() bool`

GetOtherForms returns the OtherForms field if non-nil, zero value otherwise.

### GetOtherFormsOk

`func (o *Form) GetOtherFormsOk() (*bool, bool)`

GetOtherFormsOk returns a tuple with the OtherForms field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOtherForms

`func (o *Form) SetOtherForms(v bool)`

SetOtherForms sets OtherForms field to given value.

### HasOtherForms

`func (o *Form) HasOtherForms() bool`

HasOtherForms returns a boolean if a field has been set.

### GetEproForm

`func (o *Form) GetEproForm() bool`

GetEproForm returns the EproForm field if non-nil, zero value otherwise.

### GetEproFormOk

`func (o *Form) GetEproFormOk() (*bool, bool)`

GetEproFormOk returns a tuple with the EproForm field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEproForm

`func (o *Form) SetEproForm(v bool)`

SetEproForm sets EproForm field to given value.

### HasEproForm

`func (o *Form) HasEproForm() bool`

HasEproForm returns a boolean if a field has been set.

### GetAllowCopy

`func (o *Form) GetAllowCopy() bool`

GetAllowCopy returns the AllowCopy field if non-nil, zero value otherwise.

### GetAllowCopyOk

`func (o *Form) GetAllowCopyOk() (*bool, bool)`

GetAllowCopyOk returns a tuple with the AllowCopy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAllowCopy

`func (o *Form) SetAllowCopy(v bool)`

SetAllowCopy sets AllowCopy field to given value.

### HasAllowCopy

`func (o *Form) HasAllowCopy() bool`

HasAllowCopy returns a boolean if a field has been set.

### GetDisabled

`func (o *Form) GetDisabled() bool`

GetDisabled returns the Disabled field if non-nil, zero value otherwise.

### GetDisabledOk

`func (o *Form) GetDisabledOk() (*bool, bool)`

GetDisabledOk returns a tuple with the Disabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisabled

`func (o *Form) SetDisabled(v bool)`

SetDisabled sets Disabled field to given value.

### HasDisabled

`func (o *Form) HasDisabled() bool`

HasDisabled returns a boolean if a field has been set.

### GetDateCreated

`func (o *Form) GetDateCreated() string`

GetDateCreated returns the DateCreated field if non-nil, zero value otherwise.

### GetDateCreatedOk

`func (o *Form) GetDateCreatedOk() (*string, bool)`

GetDateCreatedOk returns a tuple with the DateCreated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateCreated

`func (o *Form) SetDateCreated(v string)`

SetDateCreated sets DateCreated field to given value.

### HasDateCreated

`func (o *Form) HasDateCreated() bool`

HasDateCreated returns a boolean if a field has been set.

### GetDateModified

`func (o *Form) GetDateModified() string`

GetDateModified returns the DateModified field if non-nil, zero value otherwise.

### GetDateModifiedOk

`func (o *Form) GetDateModifiedOk() (*string, bool)`

GetDateModifiedOk returns a tuple with the DateModified field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateModified

`func (o *Form) SetDateModified(v string)`

SetDateModified sets DateModified field to given value.

### HasDateModified

`func (o *Form) HasDateModified() bool`

HasDateModified returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


