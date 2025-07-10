#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "components_schemas_record_create_request_item.h"



static components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_create_internal(
    char *form_key,
    int form_id,
    char *site_name,
    int site_id,
    char *subject_key,
    int subject_id,
    char *subject_oid,
    char *interval_name,
    int interval_id,
    int record_id,
    char *record_oid,
    list_t* data
    ) {
    components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_local_var = malloc(sizeof(components_schemas_record_create_request_item_t));
    if (!components_schemas_record_create_request_item_local_var) {
        return NULL;
    }
    components_schemas_record_create_request_item_local_var->form_key = form_key;
    components_schemas_record_create_request_item_local_var->form_id = form_id;
    components_schemas_record_create_request_item_local_var->site_name = site_name;
    components_schemas_record_create_request_item_local_var->site_id = site_id;
    components_schemas_record_create_request_item_local_var->subject_key = subject_key;
    components_schemas_record_create_request_item_local_var->subject_id = subject_id;
    components_schemas_record_create_request_item_local_var->subject_oid = subject_oid;
    components_schemas_record_create_request_item_local_var->interval_name = interval_name;
    components_schemas_record_create_request_item_local_var->interval_id = interval_id;
    components_schemas_record_create_request_item_local_var->record_id = record_id;
    components_schemas_record_create_request_item_local_var->record_oid = record_oid;
    components_schemas_record_create_request_item_local_var->data = data;

    components_schemas_record_create_request_item_local_var->_library_owned = 1;
    return components_schemas_record_create_request_item_local_var;
}

__attribute__((deprecated)) components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_create(
    char *form_key,
    int form_id,
    char *site_name,
    int site_id,
    char *subject_key,
    int subject_id,
    char *subject_oid,
    char *interval_name,
    int interval_id,
    int record_id,
    char *record_oid,
    list_t* data
    ) {
    return components_schemas_record_create_request_item_create_internal (
        form_key,
        form_id,
        site_name,
        site_id,
        subject_key,
        subject_id,
        subject_oid,
        interval_name,
        interval_id,
        record_id,
        record_oid,
        data
        );
}

void components_schemas_record_create_request_item_free(components_schemas_record_create_request_item_t *components_schemas_record_create_request_item) {
    if(NULL == components_schemas_record_create_request_item){
        return ;
    }
    if(components_schemas_record_create_request_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "components_schemas_record_create_request_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (components_schemas_record_create_request_item->form_key) {
        free(components_schemas_record_create_request_item->form_key);
        components_schemas_record_create_request_item->form_key = NULL;
    }
    if (components_schemas_record_create_request_item->site_name) {
        free(components_schemas_record_create_request_item->site_name);
        components_schemas_record_create_request_item->site_name = NULL;
    }
    if (components_schemas_record_create_request_item->subject_key) {
        free(components_schemas_record_create_request_item->subject_key);
        components_schemas_record_create_request_item->subject_key = NULL;
    }
    if (components_schemas_record_create_request_item->subject_oid) {
        free(components_schemas_record_create_request_item->subject_oid);
        components_schemas_record_create_request_item->subject_oid = NULL;
    }
    if (components_schemas_record_create_request_item->interval_name) {
        free(components_schemas_record_create_request_item->interval_name);
        components_schemas_record_create_request_item->interval_name = NULL;
    }
    if (components_schemas_record_create_request_item->record_oid) {
        free(components_schemas_record_create_request_item->record_oid);
        components_schemas_record_create_request_item->record_oid = NULL;
    }
    if (components_schemas_record_create_request_item->data) {
        list_ForEach(listEntry, components_schemas_record_create_request_item->data) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(components_schemas_record_create_request_item->data);
        components_schemas_record_create_request_item->data = NULL;
    }
    free(components_schemas_record_create_request_item);
}

cJSON *components_schemas_record_create_request_item_convertToJSON(components_schemas_record_create_request_item_t *components_schemas_record_create_request_item) {
    cJSON *item = cJSON_CreateObject();

    // components_schemas_record_create_request_item->form_key
    if (!components_schemas_record_create_request_item->form_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "formKey", components_schemas_record_create_request_item->form_key) == NULL) {
    goto fail; //String
    }


    // components_schemas_record_create_request_item->form_id
    if(components_schemas_record_create_request_item->form_id) {
    if(cJSON_AddNumberToObject(item, "formId", components_schemas_record_create_request_item->form_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // components_schemas_record_create_request_item->site_name
    if(components_schemas_record_create_request_item->site_name) {
    if(cJSON_AddStringToObject(item, "siteName", components_schemas_record_create_request_item->site_name) == NULL) {
    goto fail; //String
    }
    }


    // components_schemas_record_create_request_item->site_id
    if(components_schemas_record_create_request_item->site_id) {
    if(cJSON_AddNumberToObject(item, "siteId", components_schemas_record_create_request_item->site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // components_schemas_record_create_request_item->subject_key
    if(components_schemas_record_create_request_item->subject_key) {
    if(cJSON_AddStringToObject(item, "subjectKey", components_schemas_record_create_request_item->subject_key) == NULL) {
    goto fail; //String
    }
    }


    // components_schemas_record_create_request_item->subject_id
    if(components_schemas_record_create_request_item->subject_id) {
    if(cJSON_AddNumberToObject(item, "subjectId", components_schemas_record_create_request_item->subject_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // components_schemas_record_create_request_item->subject_oid
    if(components_schemas_record_create_request_item->subject_oid) {
    if(cJSON_AddStringToObject(item, "subjectOid", components_schemas_record_create_request_item->subject_oid) == NULL) {
    goto fail; //String
    }
    }


    // components_schemas_record_create_request_item->interval_name
    if(components_schemas_record_create_request_item->interval_name) {
    if(cJSON_AddStringToObject(item, "intervalName", components_schemas_record_create_request_item->interval_name) == NULL) {
    goto fail; //String
    }
    }


    // components_schemas_record_create_request_item->interval_id
    if(components_schemas_record_create_request_item->interval_id) {
    if(cJSON_AddNumberToObject(item, "intervalId", components_schemas_record_create_request_item->interval_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // components_schemas_record_create_request_item->record_id
    if(components_schemas_record_create_request_item->record_id) {
    if(cJSON_AddNumberToObject(item, "recordId", components_schemas_record_create_request_item->record_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // components_schemas_record_create_request_item->record_oid
    if(components_schemas_record_create_request_item->record_oid) {
    if(cJSON_AddStringToObject(item, "recordOid", components_schemas_record_create_request_item->record_oid) == NULL) {
    goto fail; //String
    }
    }


    // components_schemas_record_create_request_item->data
    if (!components_schemas_record_create_request_item->data) {
        goto fail;
    }
    cJSON *data = cJSON_AddObjectToObject(item, "data");
    if(data == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = data;
    listEntry_t *dataListEntry;
    if (components_schemas_record_create_request_item->data) {
    list_ForEach(dataListEntry, components_schemas_record_create_request_item->data) {
        keyValuePair_t *localKeyValue = dataListEntry->data;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_parseFromJSON(cJSON *components_schemas_record_create_request_itemJSON){

    components_schemas_record_create_request_item_t *components_schemas_record_create_request_item_local_var = NULL;

    // define the local map for components_schemas_record_create_request_item->data
    list_t *dataList = NULL;

    // components_schemas_record_create_request_item->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (!form_key) {
        goto end;
    }

    
    if(!cJSON_IsString(form_key))
    {
    goto end; //String
    }

    // components_schemas_record_create_request_item->form_id
    cJSON *form_id = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "formId");
    if (cJSON_IsNull(form_id)) {
        form_id = NULL;
    }
    if (form_id) { 
    if(!cJSON_IsNumber(form_id))
    {
    goto end; //Numeric
    }
    }

    // components_schemas_record_create_request_item->site_name
    cJSON *site_name = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "siteName");
    if (cJSON_IsNull(site_name)) {
        site_name = NULL;
    }
    if (site_name) { 
    if(!cJSON_IsString(site_name) && !cJSON_IsNull(site_name))
    {
    goto end; //String
    }
    }

    // components_schemas_record_create_request_item->site_id
    cJSON *site_id = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "siteId");
    if (cJSON_IsNull(site_id)) {
        site_id = NULL;
    }
    if (site_id) { 
    if(!cJSON_IsNumber(site_id))
    {
    goto end; //Numeric
    }
    }

    // components_schemas_record_create_request_item->subject_key
    cJSON *subject_key = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "subjectKey");
    if (cJSON_IsNull(subject_key)) {
        subject_key = NULL;
    }
    if (subject_key) { 
    if(!cJSON_IsString(subject_key) && !cJSON_IsNull(subject_key))
    {
    goto end; //String
    }
    }

    // components_schemas_record_create_request_item->subject_id
    cJSON *subject_id = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "subjectId");
    if (cJSON_IsNull(subject_id)) {
        subject_id = NULL;
    }
    if (subject_id) { 
    if(!cJSON_IsNumber(subject_id))
    {
    goto end; //Numeric
    }
    }

    // components_schemas_record_create_request_item->subject_oid
    cJSON *subject_oid = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "subjectOid");
    if (cJSON_IsNull(subject_oid)) {
        subject_oid = NULL;
    }
    if (subject_oid) { 
    if(!cJSON_IsString(subject_oid) && !cJSON_IsNull(subject_oid))
    {
    goto end; //String
    }
    }

    // components_schemas_record_create_request_item->interval_name
    cJSON *interval_name = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "intervalName");
    if (cJSON_IsNull(interval_name)) {
        interval_name = NULL;
    }
    if (interval_name) { 
    if(!cJSON_IsString(interval_name) && !cJSON_IsNull(interval_name))
    {
    goto end; //String
    }
    }

    // components_schemas_record_create_request_item->interval_id
    cJSON *interval_id = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "intervalId");
    if (cJSON_IsNull(interval_id)) {
        interval_id = NULL;
    }
    if (interval_id) { 
    if(!cJSON_IsNumber(interval_id))
    {
    goto end; //Numeric
    }
    }

    // components_schemas_record_create_request_item->record_id
    cJSON *record_id = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "recordId");
    if (cJSON_IsNull(record_id)) {
        record_id = NULL;
    }
    if (record_id) { 
    if(!cJSON_IsNumber(record_id))
    {
    goto end; //Numeric
    }
    }

    // components_schemas_record_create_request_item->record_oid
    cJSON *record_oid = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "recordOid");
    if (cJSON_IsNull(record_oid)) {
        record_oid = NULL;
    }
    if (record_oid) { 
    if(!cJSON_IsString(record_oid) && !cJSON_IsNull(record_oid))
    {
    goto end; //String
    }
    }

    // components_schemas_record_create_request_item->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(components_schemas_record_create_request_itemJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (!data) {
        goto end;
    }

    
    cJSON *data_local_map = NULL;
    if(!cJSON_IsObject(data) && !cJSON_IsNull(data))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(data))
    {
        dataList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(data_local_map, data)
        {
            cJSON *localMapObject = data_local_map;
            list_addElement(dataList , localMapKeyPair);
        }
    }


    components_schemas_record_create_request_item_local_var = components_schemas_record_create_request_item_create_internal (
        strdup(form_key->valuestring),
        form_id ? form_id->valuedouble : 0,
        site_name && !cJSON_IsNull(site_name) ? strdup(site_name->valuestring) : NULL,
        site_id ? site_id->valuedouble : 0,
        subject_key && !cJSON_IsNull(subject_key) ? strdup(subject_key->valuestring) : NULL,
        subject_id ? subject_id->valuedouble : 0,
        subject_oid && !cJSON_IsNull(subject_oid) ? strdup(subject_oid->valuestring) : NULL,
        interval_name && !cJSON_IsNull(interval_name) ? strdup(interval_name->valuestring) : NULL,
        interval_id ? interval_id->valuedouble : 0,
        record_id ? record_id->valuedouble : 0,
        record_oid && !cJSON_IsNull(record_oid) ? strdup(record_oid->valuestring) : NULL,
        dataList
        );

    return components_schemas_record_create_request_item_local_var;
end:
    if (dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dataList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
