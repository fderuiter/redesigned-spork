# Variable

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | Option<**String**> | Unique study key | [optional]
**variable_id** | Option<**i32**> | Mednet variable ID | [optional]
**variable_type** | Option<**String**> | Type of the variable (field type), e.g., RADIO, TEXT, etc. | [optional]
**variable_name** | Option<**String**> | Name of the variable (question text or label) | [optional]
**sequence** | Option<**i32**> | Sequence of the variable on the form | [optional]
**revision** | Option<**i32**> | Number of modifications of the variable (via form metadata revisions) | [optional]
**disabled** | Option<**bool**> | Whether the variable is marked as disabled (deleted) | [optional]
**date_created** | Option<**String**> | Date when this variable was created | [optional]
**date_modified** | Option<**String**> | Date when this variable was last modified | [optional]
**form_id** | Option<**i32**> | ID of the form that this variable belongs to | [optional]
**variable_oid** | Option<**String**> | Client-assigned variable OID | [optional]
**deleted** | Option<**bool**> | Whether the variable is marked as deleted | [optional]
**form_key** | Option<**String**> | Form key of the form that this variable belongs to | [optional]
**form_name** | Option<**String**> | Name of the form that this variable belongs to | [optional]
**label** | Option<**String**> | User-defined identifier (field name) for the variable | [optional]
**blinded** | Option<**bool**> | Whether the variable is flagged as blinded (hidden in certain contexts) | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


