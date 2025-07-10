/*
 * interval.h
 *
 * 
 */

#ifndef _interval_H_
#define _interval_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct interval_t interval_t;

#include "components_schemas_interval_forms_item.h"



typedef struct interval_t {
    char *study_key; // string
    int interval_id; //numeric
    char *interval_name; // string
    char *interval_description; // string
    int interval_sequence; //numeric
    int interval_group_id; //numeric
    char *interval_group_name; // string
    char *timeline; // string
    char *defined_using_interval; // string
    char *window_calculation_form; // string
    char *window_calculation_date; // string
    char *actual_date_form; // string
    char *actual_date; // string
    int due_date_will_be_in; //numeric
    int negative_slack; //numeric
    int positive_slack; //numeric
    int epro_grace_period; //numeric
    list_t *forms; //nonprimitive container
    int disabled; //boolean
    char *date_created; // string
    char *date_modified; // string

    int _library_owned; // Is the library responsible for freeing this object?
} interval_t;

__attribute__((deprecated)) interval_t *interval_create(
    char *study_key,
    int interval_id,
    char *interval_name,
    char *interval_description,
    int interval_sequence,
    int interval_group_id,
    char *interval_group_name,
    char *timeline,
    char *defined_using_interval,
    char *window_calculation_form,
    char *window_calculation_date,
    char *actual_date_form,
    char *actual_date,
    int due_date_will_be_in,
    int negative_slack,
    int positive_slack,
    int epro_grace_period,
    list_t *forms,
    int disabled,
    char *date_created,
    char *date_modified
);

void interval_free(interval_t *interval);

interval_t *interval_parseFromJSON(cJSON *intervalJSON);

cJSON *interval_convertToJSON(interval_t *interval);

#endif /* _interval_H_ */

