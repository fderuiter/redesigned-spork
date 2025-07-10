#ifndef query_comment_TEST
#define query_comment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define query_comment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/query_comment.h"
query_comment_t* instantiate_query_comment(int include_optional);



query_comment_t* instantiate_query_comment(int include_optional) {
  query_comment_t* query_comment = NULL;
  if (include_optional) {
    query_comment = query_comment_create(
      56,
      "0",
      "0",
      "0",
      1,
      "0"
    );
  } else {
    query_comment = query_comment_create(
      56,
      "0",
      "0",
      "0",
      1,
      "0"
    );
  }

  return query_comment;
}


#ifdef query_comment_MAIN

void test_query_comment(int include_optional) {
    query_comment_t* query_comment_1 = instantiate_query_comment(include_optional);

	cJSON* jsonquery_comment_1 = query_comment_convertToJSON(query_comment_1);
	printf("query_comment :\n%s\n", cJSON_Print(jsonquery_comment_1));
	query_comment_t* query_comment_2 = query_comment_parseFromJSON(jsonquery_comment_1);
	cJSON* jsonquery_comment_2 = query_comment_convertToJSON(query_comment_2);
	printf("repeating query_comment:\n%s\n", cJSON_Print(jsonquery_comment_2));
}

int main() {
  test_query_comment(1);
  test_query_comment(0);

  printf("Hello world \n");
  return 0;
}

#endif // query_comment_MAIN
#endif // query_comment_TEST
