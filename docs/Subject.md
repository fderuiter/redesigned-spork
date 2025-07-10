# Subject

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | Option<**String**> | Unique study key | [optional]
**subject_id** | Option<**i32**> | Mednet subject ID (internal numeric ID) | [optional]
**subject_oid** | Option<**String**> | Client-assigned subject object identifier (OID) | [optional]
**subject_key** | Option<**String**> | Protocol-assigned subject identifier (display ID) | [optional]
**subject_status** | Option<**String**> | Current status of the subject (e.g., Enrolled) | [optional]
**site_id** | Option<**i32**> | Mednet site ID the subject is associated with | [optional]
**site_name** | Option<**String**> | Name of the site the subject is associated with | [optional]
**deleted** | Option<**bool**> | Whether the subject is marked as deleted | [optional]
**enrollment_start_date** | Option<**String**> | Subject’s enrollment start date | [optional]
**date_created** | Option<**String**> | Date when this subject record was created | [optional]
**date_modified** | Option<**String**> | Date when this subject record was last modified | [optional]
**keywords** | Option<[**Vec<models::Keyword>**](Keyword.md)> | List of keywords associated with the subject | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


