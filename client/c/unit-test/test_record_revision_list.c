#ifndef record_revision_list_TEST
#define record_revision_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define record_revision_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/record_revision_list.h"
record_revision_list_t* instantiate_record_revision_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


record_revision_list_t* instantiate_record_revision_list(int include_optional) {
  record_revision_list_t* record_revision_list = NULL;
  if (include_optional) {
    record_revision_list = record_revision_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    record_revision_list = record_revision_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return record_revision_list;
}


#ifdef record_revision_list_MAIN

void test_record_revision_list(int include_optional) {
    record_revision_list_t* record_revision_list_1 = instantiate_record_revision_list(include_optional);

	cJSON* jsonrecord_revision_list_1 = record_revision_list_convertToJSON(record_revision_list_1);
	printf("record_revision_list :\n%s\n", cJSON_Print(jsonrecord_revision_list_1));
	record_revision_list_t* record_revision_list_2 = record_revision_list_parseFromJSON(jsonrecord_revision_list_1);
	cJSON* jsonrecord_revision_list_2 = record_revision_list_convertToJSON(record_revision_list_2);
	printf("repeating record_revision_list:\n%s\n", cJSON_Print(jsonrecord_revision_list_2));
}

int main() {
  test_record_revision_list(1);
  test_record_revision_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // record_revision_list_MAIN
#endif // record_revision_list_TEST
