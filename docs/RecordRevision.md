# RecordRevision

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**study_key** | Option<**String**> | Unique study key | [optional]
**record_revision_id** | Option<**i32**> | Unique system identifier for the record revision | [optional]
**record_id** | Option<**i32**> | Unique system identifier of the related record | [optional]
**record_oid** | Option<**String**> | Client-assigned record OID (if any) | [optional]
**record_revision** | Option<**i32**> | Revision number of the record (version of the record status) | [optional]
**data_revision** | Option<**i32**> | Revision number of the data within the record | [optional]
**record_status** | Option<**String**> | Status of the record at this revision (user-defined status label) | [optional]
**subject_id** | Option<**i32**> | Mednet subject ID related to the record | [optional]
**subject_oid** | Option<**String**> | Client-assigned subject OID related to the record | [optional]
**subject_key** | Option<**String**> | Subject display ID related to the record | [optional]
**site_id** | Option<**i32**> | Site ID related to the record | [optional]
**form_key** | Option<**String**> | Form key of the form that the record belongs to | [optional]
**interval_id** | Option<**i32**> | Interval ID (visit definition) related to the record | [optional]
**role** | Option<**String**> | Role name of the user who saved the record revision | [optional]
**user** | Option<**String**> | Username of the user who saved the record revision | [optional]
**reason_for_change** | Option<**String**> | Reason for change, if provided (for audit trail) | [optional]
**deleted** | Option<**bool**> | Whether the record was deleted in this revision | [optional]
**date_created** | Option<**String**> | Date when this record revision was created | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


