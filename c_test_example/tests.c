#include "../cli_test.h"

//The overall structure of this will look like this:
//cli_test my_test_1{
//	tester.is_equal(2, 2+2);
//	tester.is_false(some_function_that_returns_bool());
//};
//
//cli_test my_test_2{
//	tester.is_not_equal(20, 10*10);
//};
//
//tester.unit_tests = {&my_test_1, &my_test_2}; // I will try to automate this or make it easier if you have many tests.
//
//Console Output:
//my_test_1: Passed
//my_test_2: Failed
//
