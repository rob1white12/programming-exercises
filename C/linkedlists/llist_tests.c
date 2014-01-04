#include "minunit.h"
#include "llist.h"

static LinkedList *list = NULL;

void test_setup() {
    list = List_create();
}

void test_teardown() {
    /* do nothing for now */
}

MU_TEST(test_assert_list_created) {
    mu_assert(list != NULL, "LinkedList was null - it should have been created");
    mu_assert(List_size(list) == 0, "The LinkedList size should be 0");
    mu_assert(List_empty(list), "The LinkedList should return empty");
}

MU_TEST_SUITE(test_suite) {
    MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

    MU_RUN_TEST(test_assert_list_created);
}

int main(int argc, char* argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();

    return 0;
}
