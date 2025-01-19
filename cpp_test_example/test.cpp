#include "../cli_test.hpp"
#include "example.hpp"

TEST test1(){
	CLI::is_equal(2, 2);
}
cli_test::unit_tests.push_back(&test1);

TEST test2(){
	CLI::is_equal(1, 2);
	CLI::is_false(0);
}
cli_test::unit_tests.push_back(&test2);
