#ifndef query_list_TEST
#define query_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define query_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/query_list.h"
query_list_t* instantiate_query_list(int include_optional);

#include "test_metadata.c"
#include "test_pagination.c"


query_list_t* instantiate_query_list(int include_optional) {
  query_list_t* query_list = NULL;
  if (include_optional) {
    query_list = query_list_create(
       // false, not to have infinite recursion
      instantiate_metadata(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_createList()
    );
  } else {
    query_list = query_list_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return query_list;
}


#ifdef query_list_MAIN

void test_query_list(int include_optional) {
    query_list_t* query_list_1 = instantiate_query_list(include_optional);

	cJSON* jsonquery_list_1 = query_list_convertToJSON(query_list_1);
	printf("query_list :\n%s\n", cJSON_Print(jsonquery_list_1));
	query_list_t* query_list_2 = query_list_parseFromJSON(jsonquery_list_1);
	cJSON* jsonquery_list_2 = query_list_convertToJSON(query_list_2);
	printf("repeating query_list:\n%s\n", cJSON_Print(jsonquery_list_2));
}

int main() {
  test_query_list(1);
  test_query_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // query_list_MAIN
#endif // query_list_TEST
