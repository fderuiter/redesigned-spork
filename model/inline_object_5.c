#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_5.h"



static inline_object_5_t *inline_object_5_create_internal(
    metadata_t *metadata
    ) {
    inline_object_5_t *inline_object_5_local_var = malloc(sizeof(inline_object_5_t));
    if (!inline_object_5_local_var) {
        return NULL;
    }
    inline_object_5_local_var->metadata = metadata;

    inline_object_5_local_var->_library_owned = 1;
    return inline_object_5_local_var;
}

__attribute__((deprecated)) inline_object_5_t *inline_object_5_create(
    metadata_t *metadata
    ) {
    return inline_object_5_create_internal (
        metadata
        );
}

void inline_object_5_free(inline_object_5_t *inline_object_5) {
    if(NULL == inline_object_5){
        return ;
    }
    if(inline_object_5->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inline_object_5_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inline_object_5->metadata) {
        metadata_free(inline_object_5->metadata);
        inline_object_5->metadata = NULL;
    }
    free(inline_object_5);
}

cJSON *inline_object_5_convertToJSON(inline_object_5_t *inline_object_5) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_5->metadata
    if(inline_object_5->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(inline_object_5->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_5_t *inline_object_5_parseFromJSON(cJSON *inline_object_5JSON){

    inline_object_5_t *inline_object_5_local_var = NULL;

    // define the local variable for inline_object_5->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // inline_object_5->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(inline_object_5JSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }


    inline_object_5_local_var = inline_object_5_create_internal (
        metadata ? metadata_local_nonprim : NULL
        );

    return inline_object_5_local_var;
end:
    if (metadata_local_nonprim) {
        metadata_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
