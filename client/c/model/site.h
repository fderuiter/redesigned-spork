/*
 * site.h
 *
 * 
 */

#ifndef _site_H_
#define _site_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct site_t site_t;




typedef struct site_t {
    char *study_key; // string
    int site_id; //numeric
    char *site_name; // string
    char *site_enrollment_status; // string
    char *date_created; // string
    char *date_modified; // string

    int _library_owned; // Is the library responsible for freeing this object?
} site_t;

__attribute__((deprecated)) site_t *site_create(
    char *study_key,
    int site_id,
    char *site_name,
    char *site_enrollment_status,
    char *date_created,
    char *date_modified
);

void site_free(site_t *site);

site_t *site_parseFromJSON(cJSON *siteJSON);

cJSON *site_convertToJSON(site_t *site);

#endif /* _site_H_ */

