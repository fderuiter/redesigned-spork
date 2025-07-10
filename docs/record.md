# record_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | **char \*** | Unique study key | [optional] 
**interval_id** | **int** | Interval ID (visit definition) that this record is associated with | [optional] 
**form_id** | **int** | Form ID of the form this record instance belongs to | [optional] 
**form_key** | **char \*** | Form key of the form for this record instance | [optional] 
**site_id** | **int** | Site ID associated with the record | [optional] 
**record_id** | **int** | Unique record ID | [optional] 
**record_oid** | **char \*** | Client-assigned record OID | [optional] 
**record_type** | **char \*** | Type of record (e.g., SUBJECT for subject-related forms) | [optional] 
**record_status** | **char \*** | Current status of the record (e.g., Record Incomplete, Record Complete) | [optional] 
**deleted** | **int** | Whether the record is marked as deleted | [optional] 
**date_created** | **char \*** | Date when this record was created | [optional] 
**date_modified** | **char \*** | Date when this record was last modified | [optional] 
**subject_id** | **int** | Mednet subject ID that this record is associated with | [optional] 
**subject_oid** | **char \*** | Client-assigned subject OID for the subject this record is associated with | [optional] 
**subject_key** | **char \*** | Subject display ID that this record is associated with | [optional] 
**visit_id** | **int** | Visit instance ID that this record is associated with (if applicable) | [optional] 
**parent_record_id** | **int** | Record ID of the parent record if this record is a subrecord (if applicable) | [optional] 
**keywords** | [**list_t**](keyword.md) \* | List of keywords associated with the record | [optional] 
**record_data** | **list_t*** | Data fields and values captured in this record. The structure is dynamic, with keys corresponding to variable names. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


