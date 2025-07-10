#ifndef query_TEST
#define query_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define query_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/query.h"
query_t* instantiate_query(int include_optional);



query_t* instantiate_query(int include_optional) {
  query_t* query = NULL;
  if (include_optional) {
    query = query_create(
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    query = query_create(
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return query;
}


#ifdef query_MAIN

void test_query(int include_optional) {
    query_t* query_1 = instantiate_query(include_optional);

	cJSON* jsonquery_1 = query_convertToJSON(query_1);
	printf("query :\n%s\n", cJSON_Print(jsonquery_1));
	query_t* query_2 = query_parseFromJSON(jsonquery_1);
	cJSON* jsonquery_2 = query_convertToJSON(query_2);
	printf("repeating query:\n%s\n", cJSON_Print(jsonquery_2));
}

int main() {
  test_query(1);
  test_query(0);

  printf("Hello world \n");
  return 0;
}

#endif // query_MAIN
#endif // query_TEST
