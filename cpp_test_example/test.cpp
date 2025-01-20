#include "../cli_test.hpp"
#include "example.hpp"

void test_main(){
	//Example
	TEST("test1", {
		CLI::is_true(true), 
		CLI::is_equal(1, 1),
		CLI::is_false(true)
	});

	TEST("test2", {
		CLI::is_not_equal(1.0, operations::add(1, 2)),
		CLI::is_false(false)		
	});

}

//Explanation:
//	This is a macro that stores an std::pair of first = test_name and second = std::vector_of_tests
//
