#ifndef visit_list_TEST
#define visit_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define visit_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/visit_list.h"
visit_list_t* instantiate_visit_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


visit_list_t* instantiate_visit_list(int include_optional) {
  visit_list_t* visit_list = NULL;
  if (include_optional) {
    visit_list = visit_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    visit_list = visit_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return visit_list;
}


#ifdef visit_list_MAIN

void test_visit_list(int include_optional) {
    visit_list_t* visit_list_1 = instantiate_visit_list(include_optional);

	cJSON* jsonvisit_list_1 = visit_list_convertToJSON(visit_list_1);
	printf("visit_list :\n%s\n", cJSON_Print(jsonvisit_list_1));
	visit_list_t* visit_list_2 = visit_list_parseFromJSON(jsonvisit_list_1);
	cJSON* jsonvisit_list_2 = visit_list_convertToJSON(visit_list_2);
	printf("repeating visit_list:\n%s\n", cJSON_Print(jsonvisit_list_2));
}

int main() {
  test_visit_list(1);
  test_visit_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // visit_list_MAIN
#endif // visit_list_TEST
