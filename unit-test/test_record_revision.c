#ifndef record_revision_TEST
#define record_revision_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define record_revision_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/record_revision.h"
record_revision_t* instantiate_record_revision(int include_optional);



record_revision_t* instantiate_record_revision(int include_optional) {
  record_revision_t* record_revision = NULL;
  if (include_optional) {
    record_revision = record_revision_create(
      "0",
      56,
      56,
      "0",
      56,
      56,
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      56,
      "0",
      "0",
      "0",
      1,
      "0"
    );
  } else {
    record_revision = record_revision_create(
      "0",
      56,
      56,
      "0",
      56,
      56,
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      56,
      "0",
      "0",
      "0",
      1,
      "0"
    );
  }

  return record_revision;
}


#ifdef record_revision_MAIN

void test_record_revision(int include_optional) {
    record_revision_t* record_revision_1 = instantiate_record_revision(include_optional);

	cJSON* jsonrecord_revision_1 = record_revision_convertToJSON(record_revision_1);
	printf("record_revision :\n%s\n", cJSON_Print(jsonrecord_revision_1));
	record_revision_t* record_revision_2 = record_revision_parseFromJSON(jsonrecord_revision_1);
	cJSON* jsonrecord_revision_2 = record_revision_convertToJSON(record_revision_2);
	printf("repeating record_revision:\n%s\n", cJSON_Print(jsonrecord_revision_2));
}

int main() {
  test_record_revision(1);
  test_record_revision(0);

  printf("Hello world \n");
  return 0;
}

#endif // record_revision_MAIN
#endif // record_revision_TEST
