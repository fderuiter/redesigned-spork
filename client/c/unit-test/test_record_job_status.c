#ifndef record_job_status_TEST
#define record_job_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define record_job_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/record_job_status.h"
record_job_status_t* instantiate_record_job_status(int include_optional);



record_job_status_t* instantiate_record_job_status(int include_optional) {
  record_job_status_t* record_job_status = NULL;
  if (include_optional) {
    record_job_status = record_job_status_create(
      "0",
      "0",
      "0"
    );
  } else {
    record_job_status = record_job_status_create(
      "0",
      "0",
      "0"
    );
  }

  return record_job_status;
}


#ifdef record_job_status_MAIN

void test_record_job_status(int include_optional) {
    record_job_status_t* record_job_status_1 = instantiate_record_job_status(include_optional);

	cJSON* jsonrecord_job_status_1 = record_job_status_convertToJSON(record_job_status_1);
	printf("record_job_status :\n%s\n", cJSON_Print(jsonrecord_job_status_1));
	record_job_status_t* record_job_status_2 = record_job_status_parseFromJSON(jsonrecord_job_status_1);
	cJSON* jsonrecord_job_status_2 = record_job_status_convertToJSON(record_job_status_2);
	printf("repeating record_job_status:\n%s\n", cJSON_Print(jsonrecord_job_status_2));
}

int main() {
  test_record_job_status(1);
  test_record_job_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // record_job_status_MAIN
#endif // record_job_status_TEST
