/*
 * variable.h
 *
 * 
 */

#ifndef _variable_H_
#define _variable_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variable_t variable_t;


// Enum VARIABLETYPE for variable

typedef enum  { mednet_edc_api_variable_VARIABLETYPE_NULL = 0, mednet_edc_api_variable_VARIABLETYPE_TEXT, mednet_edc_api_variable_VARIABLETYPE_TEXTAREA, mednet_edc_api_variable_VARIABLETYPE_RADIO, mednet_edc_api_variable_VARIABLETYPE_CHECKBOX, mednet_edc_api_variable_VARIABLETYPE_DROPDOWN, mednet_edc_api_variable_VARIABLETYPE_DATE, mednet_edc_api_variable_VARIABLETYPE_NUMBER } mednet_edc_api_variable_VARIABLETYPE_e;

char* variable_variable_type_ToString(mednet_edc_api_variable_VARIABLETYPE_e variable_type);

mednet_edc_api_variable_VARIABLETYPE_e variable_variable_type_FromString(char* variable_type);



typedef struct variable_t {
    char *study_key; // string
    int variable_id; //numeric
    mednet_edc_api_variable_VARIABLETYPE_e variable_type; //enum
    char *variable_name; // string
    int sequence; //numeric
    int revision; //numeric
    int disabled; //boolean
    char *date_created; // string
    char *date_modified; // string
    int form_id; //numeric
    char *variable_oid; // string
    int deleted; //boolean
    char *form_key; // string
    char *form_name; // string
    char *label; // string
    int blinded; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} variable_t;

__attribute__((deprecated)) variable_t *variable_create(
    char *study_key,
    int variable_id,
    mednet_edc_api_variable_VARIABLETYPE_e variable_type,
    char *variable_name,
    int sequence,
    int revision,
    int disabled,
    char *date_created,
    char *date_modified,
    int form_id,
    char *variable_oid,
    int deleted,
    char *form_key,
    char *form_name,
    char *label,
    int blinded
);

void variable_free(variable_t *variable);

variable_t *variable_parseFromJSON(cJSON *variableJSON);

cJSON *variable_convertToJSON(variable_t *variable);

#endif /* _variable_H_ */

