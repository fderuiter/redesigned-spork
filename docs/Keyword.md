# Keyword

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**KeywordName** | Pointer to **string** | Name of the keyword | [optional] 
**KeywordKey** | Pointer to **string** | Key of the keyword (short code) | [optional] 
**KeywordId** | Pointer to **int32** | Internal keyword ID | [optional] 
**DateAdded** | Pointer to **string** | Date when this keyword was added | [optional] 

## Methods

### NewKeyword

`func NewKeyword() *Keyword`

NewKeyword instantiates a new Keyword object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewKeywordWithDefaults

`func NewKeywordWithDefaults() *Keyword`

NewKeywordWithDefaults instantiates a new Keyword object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetKeywordName

`func (o *Keyword) GetKeywordName() string`

GetKeywordName returns the KeywordName field if non-nil, zero value otherwise.

### GetKeywordNameOk

`func (o *Keyword) GetKeywordNameOk() (*string, bool)`

GetKeywordNameOk returns a tuple with the KeywordName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKeywordName

`func (o *Keyword) SetKeywordName(v string)`

SetKeywordName sets KeywordName field to given value.

### HasKeywordName

`func (o *Keyword) HasKeywordName() bool`

HasKeywordName returns a boolean if a field has been set.

### GetKeywordKey

`func (o *Keyword) GetKeywordKey() string`

GetKeywordKey returns the KeywordKey field if non-nil, zero value otherwise.

### GetKeywordKeyOk

`func (o *Keyword) GetKeywordKeyOk() (*string, bool)`

GetKeywordKeyOk returns a tuple with the KeywordKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKeywordKey

`func (o *Keyword) SetKeywordKey(v string)`

SetKeywordKey sets KeywordKey field to given value.

### HasKeywordKey

`func (o *Keyword) HasKeywordKey() bool`

HasKeywordKey returns a boolean if a field has been set.

### GetKeywordId

`func (o *Keyword) GetKeywordId() int32`

GetKeywordId returns the KeywordId field if non-nil, zero value otherwise.

### GetKeywordIdOk

`func (o *Keyword) GetKeywordIdOk() (*int32, bool)`

GetKeywordIdOk returns a tuple with the KeywordId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetKeywordId

`func (o *Keyword) SetKeywordId(v int32)`

SetKeywordId sets KeywordId field to given value.

### HasKeywordId

`func (o *Keyword) HasKeywordId() bool`

HasKeywordId returns a boolean if a field has been set.

### GetDateAdded

`func (o *Keyword) GetDateAdded() string`

GetDateAdded returns the DateAdded field if non-nil, zero value otherwise.

### GetDateAddedOk

`func (o *Keyword) GetDateAddedOk() (*string, bool)`

GetDateAddedOk returns a tuple with the DateAdded field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDateAdded

`func (o *Keyword) SetDateAdded(v string)`

SetDateAdded sets DateAdded field to given value.

### HasDateAdded

`func (o *Keyword) HasDateAdded() bool`

HasDateAdded returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


