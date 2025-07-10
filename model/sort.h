/*
 * sort.h
 *
 * 
 */

#ifndef _sort_H_
#define _sort_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sort_t sort_t;


// Enum DIRECTION for sort

typedef enum  { mednet_edc_api_sort_DIRECTION_NULL = 0, mednet_edc_api_sort_DIRECTION_ASC, mednet_edc_api_sort_DIRECTION_DESC } mednet_edc_api_sort_DIRECTION_e;

char* sort_direction_ToString(mednet_edc_api_sort_DIRECTION_e direction);

mednet_edc_api_sort_DIRECTION_e sort_direction_FromString(char* direction);



typedef struct sort_t {
    char *property; // string
    mednet_edc_api_sort_DIRECTION_e direction; //enum

    int _library_owned; // Is the library responsible for freeing this object?
} sort_t;

__attribute__((deprecated)) sort_t *sort_create(
    char *property,
    mednet_edc_api_sort_DIRECTION_e direction
);

void sort_free(sort_t *sort);

sort_t *sort_parseFromJSON(cJSON *sortJSON);

cJSON *sort_convertToJSON(sort_t *sort);

#endif /* _sort_H_ */

