#ifndef record_list_TEST
#define record_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define record_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/record_list.h"
record_list_t* instantiate_record_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


record_list_t* instantiate_record_list(int include_optional) {
  record_list_t* record_list = NULL;
  if (include_optional) {
    record_list = record_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    record_list = record_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return record_list;
}


#ifdef record_list_MAIN

void test_record_list(int include_optional) {
    record_list_t* record_list_1 = instantiate_record_list(include_optional);

	cJSON* jsonrecord_list_1 = record_list_convertToJSON(record_list_1);
	printf("record_list :\n%s\n", cJSON_Print(jsonrecord_list_1));
	record_list_t* record_list_2 = record_list_parseFromJSON(jsonrecord_list_1);
	cJSON* jsonrecord_list_2 = record_list_convertToJSON(record_list_2);
	printf("repeating record_list:\n%s\n", cJSON_Print(jsonrecord_list_2));
}

int main() {
  test_record_list(1);
  test_record_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // record_list_MAIN
#endif // record_list_TEST
