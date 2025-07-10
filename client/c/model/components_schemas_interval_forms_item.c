#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "components_schemas_interval_forms_item.h"



static components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_create_internal(
    int form_id,
    char *form_key,
    char *form_name
    ) {
    components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_local_var = malloc(sizeof(components_schemas_interval_forms_item_t));
    if (!components_schemas_interval_forms_item_local_var) {
        return NULL;
    }
    components_schemas_interval_forms_item_local_var->form_id = form_id;
    components_schemas_interval_forms_item_local_var->form_key = form_key;
    components_schemas_interval_forms_item_local_var->form_name = form_name;

    components_schemas_interval_forms_item_local_var->_library_owned = 1;
    return components_schemas_interval_forms_item_local_var;
}

__attribute__((deprecated)) components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_create(
    int form_id,
    char *form_key,
    char *form_name
    ) {
    return components_schemas_interval_forms_item_create_internal (
        form_id,
        form_key,
        form_name
        );
}

void components_schemas_interval_forms_item_free(components_schemas_interval_forms_item_t *components_schemas_interval_forms_item) {
    if(NULL == components_schemas_interval_forms_item){
        return ;
    }
    if(components_schemas_interval_forms_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "components_schemas_interval_forms_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (components_schemas_interval_forms_item->form_key) {
        free(components_schemas_interval_forms_item->form_key);
        components_schemas_interval_forms_item->form_key = NULL;
    }
    if (components_schemas_interval_forms_item->form_name) {
        free(components_schemas_interval_forms_item->form_name);
        components_schemas_interval_forms_item->form_name = NULL;
    }
    free(components_schemas_interval_forms_item);
}

cJSON *components_schemas_interval_forms_item_convertToJSON(components_schemas_interval_forms_item_t *components_schemas_interval_forms_item) {
    cJSON *item = cJSON_CreateObject();

    // components_schemas_interval_forms_item->form_id
    if(components_schemas_interval_forms_item->form_id) {
    if(cJSON_AddNumberToObject(item, "formId", components_schemas_interval_forms_item->form_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // components_schemas_interval_forms_item->form_key
    if(components_schemas_interval_forms_item->form_key) {
    if(cJSON_AddStringToObject(item, "formKey", components_schemas_interval_forms_item->form_key) == NULL) {
    goto fail; //String
    }
    }


    // components_schemas_interval_forms_item->form_name
    if(components_schemas_interval_forms_item->form_name) {
    if(cJSON_AddStringToObject(item, "formName", components_schemas_interval_forms_item->form_name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_parseFromJSON(cJSON *components_schemas_interval_forms_itemJSON){

    components_schemas_interval_forms_item_t *components_schemas_interval_forms_item_local_var = NULL;

    // components_schemas_interval_forms_item->form_id
    cJSON *form_id = cJSON_GetObjectItemCaseSensitive(components_schemas_interval_forms_itemJSON, "formId");
    if (cJSON_IsNull(form_id)) {
        form_id = NULL;
    }
    if (form_id) { 
    if(!cJSON_IsNumber(form_id))
    {
    goto end; //Numeric
    }
    }

    // components_schemas_interval_forms_item->form_key
    cJSON *form_key = cJSON_GetObjectItemCaseSensitive(components_schemas_interval_forms_itemJSON, "formKey");
    if (cJSON_IsNull(form_key)) {
        form_key = NULL;
    }
    if (form_key) { 
    if(!cJSON_IsString(form_key) && !cJSON_IsNull(form_key))
    {
    goto end; //String
    }
    }

    // components_schemas_interval_forms_item->form_name
    cJSON *form_name = cJSON_GetObjectItemCaseSensitive(components_schemas_interval_forms_itemJSON, "formName");
    if (cJSON_IsNull(form_name)) {
        form_name = NULL;
    }
    if (form_name) { 
    if(!cJSON_IsString(form_name) && !cJSON_IsNull(form_name))
    {
    goto end; //String
    }
    }


    components_schemas_interval_forms_item_local_var = components_schemas_interval_forms_item_create_internal (
        form_id ? form_id->valuedouble : 0,
        form_key && !cJSON_IsNull(form_key) ? strdup(form_key->valuestring) : NULL,
        form_name && !cJSON_IsNull(form_name) ? strdup(form_name->valuestring) : NULL
        );

    return components_schemas_interval_forms_item_local_var;
end:
    return NULL;

}
