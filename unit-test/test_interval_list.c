#ifndef interval_list_TEST
#define interval_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define interval_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/interval_list.h"
interval_list_t* instantiate_interval_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


interval_list_t* instantiate_interval_list(int include_optional) {
  interval_list_t* interval_list = NULL;
  if (include_optional) {
    interval_list = interval_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    interval_list = interval_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return interval_list;
}


#ifdef interval_list_MAIN

void test_interval_list(int include_optional) {
    interval_list_t* interval_list_1 = instantiate_interval_list(include_optional);

	cJSON* jsoninterval_list_1 = interval_list_convertToJSON(interval_list_1);
	printf("interval_list :\n%s\n", cJSON_Print(jsoninterval_list_1));
	interval_list_t* interval_list_2 = interval_list_parseFromJSON(jsoninterval_list_1);
	cJSON* jsoninterval_list_2 = interval_list_convertToJSON(interval_list_2);
	printf("repeating interval_list:\n%s\n", cJSON_Print(jsoninterval_list_2));
}

int main() {
  test_interval_list(1);
  test_interval_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // interval_list_MAIN
#endif // interval_list_TEST
