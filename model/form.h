/*
 * form.h
 *
 * 
 */

#ifndef _form_H_
#define _form_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct form_t form_t;




typedef struct form_t {
    char *study_key; // string
    int form_id; //numeric
    char *form_key; // string
    char *form_name; // string
    char *form_type; // string
    int revision; //numeric
    int embedded_log; //boolean
    int enforce_ownership; //boolean
    int user_agreement; //boolean
    int subject_record_report; //boolean
    int unscheduled_visit; //boolean
    int other_forms; //boolean
    int epro_form; //boolean
    int allow_copy; //boolean
    int disabled; //boolean
    char *date_created; // string
    char *date_modified; // string

    int _library_owned; // Is the library responsible for freeing this object?
} form_t;

__attribute__((deprecated)) form_t *form_create(
    char *study_key,
    int form_id,
    char *form_key,
    char *form_name,
    char *form_type,
    int revision,
    int embedded_log,
    int enforce_ownership,
    int user_agreement,
    int subject_record_report,
    int unscheduled_visit,
    int other_forms,
    int epro_form,
    int allow_copy,
    int disabled,
    char *date_created,
    char *date_modified
);

void form_free(form_t *form);

form_t *form_parseFromJSON(cJSON *formJSON);

cJSON *form_convertToJSON(form_t *form);

#endif /* _form_H_ */

