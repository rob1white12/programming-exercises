#include "minunit.h"
#include "llist.h"

static LinkedList *list = NULL;
static char *itemOne = "First test item";

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

MU_TEST(test_assert_item_inserted_at_head) {
    List_insertAtHead(list, itemOne);
    mu_assert(List_size(list) == 1, "The LinkedList size should be 1");
    mu_assert(!List_empty(list), "The LinkedList should not return empty");
}

MU_TEST_SUITE(test_suite) {
    MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

    MU_RUN_TEST(test_assert_list_created);
    MU_RUN_TEST(test_assert_item_inserted_at_head);
}

int main(int argc, char* argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();

    return 0;
}
