#include "minunit.h"
#include "milibreria.h"
static int foo = 0;
static int bar = 0;
static double dbar = 0.1;
static const char* foostring = "Thisstring";

void test_setup(void) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

void test_teardown(void) {
	/* Nothing */
}

MU_TEST(test_check) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_check_fail) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_assert) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_assert_fail) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_assert_int_eq) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_assert_int_eq_fail) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_assert_double_eq) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_assert_double_eq_fail) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_fail) {
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_string_eq){
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}

MU_TEST(test_string_eq_fail){
	mu_assert_int_eq(4,bin2(1,1,1,1,1));
}


MU_TEST_SUITE(test_suite) {
	MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

	MU_RUN_TEST(test_check);
	MU_RUN_TEST(test_assert);
	MU_RUN_TEST(test_assert_int_eq);
	MU_RUN_TEST(test_assert_double_eq);

	MU_RUN_TEST(test_check_fail);
	MU_RUN_TEST(test_assert_fail);
	MU_RUN_TEST(test_assert_int_eq_fail);
	MU_RUN_TEST(test_assert_double_eq_fail);

	MU_RUN_TEST(test_string_eq);
	MU_RUN_TEST(test_string_eq_fail);

	MU_RUN_TEST(test_fail);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return 0;
}

