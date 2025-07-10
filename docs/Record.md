# Record

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | Option<**String**> | Unique study key | [optional]
**interval_id** | Option<**i32**> | Interval ID (visit definition) that this record is associated with | [optional]
**form_id** | Option<**i32**> | Form ID of the form this record instance belongs to | [optional]
**form_key** | Option<**String**> | Form key of the form for this record instance | [optional]
**site_id** | Option<**i32**> | Site ID associated with the record | [optional]
**record_id** | Option<**i32**> | Unique record ID | [optional]
**record_oid** | Option<**String**> | Client-assigned record OID | [optional]
**record_type** | Option<**String**> | Type of record (e.g., SUBJECT for subject-related forms) | [optional]
**record_status** | Option<**String**> | Current status of the record (e.g., Record Incomplete, Record Complete) | [optional]
**deleted** | Option<**bool**> | Whether the record is marked as deleted | [optional]
**date_created** | Option<**String**> | Date when this record was created | [optional]
**date_modified** | Option<**String**> | Date when this record was last modified | [optional]
**subject_id** | Option<**i32**> | Mednet subject ID that this record is associated with | [optional]
**subject_oid** | Option<**String**> | Client-assigned subject OID for the subject this record is associated with | [optional]
**subject_key** | Option<**String**> | Subject display ID that this record is associated with | [optional]
**visit_id** | Option<**i32**> | Visit instance ID that this record is associated with (if applicable) | [optional]
**parent_record_id** | Option<**i32**> | Record ID of the parent record if this record is a subrecord (if applicable) | [optional]
**keywords** | Option<[**Vec<models::Keyword>**](Keyword.md)> | List of keywords associated with the record | [optional]
**record_data** | Option<[**std::collections::HashMap<String, serde_json::Value>**](serde_json::Value.md)> | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


