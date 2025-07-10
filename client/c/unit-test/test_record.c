#ifndef record_TEST
#define record_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define record_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/record.h"
record_t* instantiate_record(int include_optional);



record_t* instantiate_record(int include_optional) {
  record_t* record = NULL;
  if (include_optional) {
    record = record_create(
      "0",
      56,
      56,
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      56,
      list_createList(),
      list_createList()
    );
  } else {
    record = record_create(
      "0",
      56,
      56,
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      56,
      list_createList(),
      list_createList()
    );
  }

  return record;
}


#ifdef record_MAIN

void test_record(int include_optional) {
    record_t* record_1 = instantiate_record(include_optional);

	cJSON* jsonrecord_1 = record_convertToJSON(record_1);
	printf("record :\n%s\n", cJSON_Print(jsonrecord_1));
	record_t* record_2 = record_parseFromJSON(jsonrecord_1);
	cJSON* jsonrecord_2 = record_convertToJSON(record_2);
	printf("repeating record:\n%s\n", cJSON_Print(jsonrecord_2));
}

int main() {
  test_record(1);
  test_record(0);

  printf("Hello world \n");
  return 0;
}

#endif // record_MAIN
#endif // record_TEST
