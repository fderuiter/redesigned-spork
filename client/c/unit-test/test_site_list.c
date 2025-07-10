#ifndef site_list_TEST
#define site_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define site_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/site_list.h"
site_list_t* instantiate_site_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


site_list_t* instantiate_site_list(int include_optional) {
  site_list_t* site_list = NULL;
  if (include_optional) {
    site_list = site_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    site_list = site_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return site_list;
}


#ifdef site_list_MAIN

void test_site_list(int include_optional) {
    site_list_t* site_list_1 = instantiate_site_list(include_optional);

	cJSON* jsonsite_list_1 = site_list_convertToJSON(site_list_1);
	printf("site_list :\n%s\n", cJSON_Print(jsonsite_list_1));
	site_list_t* site_list_2 = site_list_parseFromJSON(jsonsite_list_1);
	cJSON* jsonsite_list_2 = site_list_convertToJSON(site_list_2);
	printf("repeating site_list:\n%s\n", cJSON_Print(jsonsite_list_2));
}

int main() {
  test_site_list(1);
  test_site_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // site_list_MAIN
#endif // site_list_TEST
