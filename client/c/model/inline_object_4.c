#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_4.h"



static inline_object_4_t *inline_object_4_create_internal(
    metadata_t *metadata
    ) {
    inline_object_4_t *inline_object_4_local_var = malloc(sizeof(inline_object_4_t));
    if (!inline_object_4_local_var) {
        return NULL;
    }
    inline_object_4_local_var->metadata = metadata;

    inline_object_4_local_var->_library_owned = 1;
    return inline_object_4_local_var;
}

__attribute__((deprecated)) inline_object_4_t *inline_object_4_create(
    metadata_t *metadata
    ) {
    return inline_object_4_create_internal (
        metadata
        );
}

void inline_object_4_free(inline_object_4_t *inline_object_4) {
    if(NULL == inline_object_4){
        return ;
    }
    if(inline_object_4->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inline_object_4_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inline_object_4->metadata) {
        metadata_free(inline_object_4->metadata);
        inline_object_4->metadata = NULL;
    }
    free(inline_object_4);
}

cJSON *inline_object_4_convertToJSON(inline_object_4_t *inline_object_4) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_4->metadata
    if(inline_object_4->metadata) {
    cJSON *metadata_local_JSON = metadata_convertToJSON(inline_object_4->metadata);
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

inline_object_4_t *inline_object_4_parseFromJSON(cJSON *inline_object_4JSON){

    inline_object_4_t *inline_object_4_local_var = NULL;

    // define the local variable for inline_object_4->metadata
    metadata_t *metadata_local_nonprim = NULL;

    // inline_object_4->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(inline_object_4JSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    if (metadata) { 
    metadata_local_nonprim = metadata_parseFromJSON(metadata); //nonprimitive
    }


    inline_object_4_local_var = inline_object_4_create_internal (
        metadata ? metadata_local_nonprim : NULL
        );

    return inline_object_4_local_var;
end:
    if (metadata_local_nonprim) {
        metadata_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
