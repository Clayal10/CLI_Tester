#include "../cli_test.hpp"
#include "example.hpp"

void test_main(){
	//Example
	TEST("test1", {
		CLI::is_true(true), 
		CLI::is_equal(1, 1),
		CLI::is_not_true(true)
	});

	TEST("test2", {
		CLI::is_not_true(false),		
		CLI::is_not_equal(operations::add(2.0, 3.0), 6.0)	
	});

	TEST("Type mismatch1", {
		CLI::is_same_type(1, 1.0),	
	});
	
	TEST("Type mismatch2", {
		CLI::is_not_same_type(1, 1.0),	
	});

	TEST("Template test", {
		CLI::is_equal(2.0, 2.0),
		CLI::is_equal("test", "test")
	});
	TEST("rm test", {
		CLI::is_equal(2, 2),
       		CLI::is_not_equal(1, 2),
		CLI::is_true(true),
        	CLI::is_not_true(false),
        	CLI::is_same_type(1.0, 1.0),
       		CLI::is_not_same_type(1.0, 1),	
	});
	TEST("close test", {
		CLI::is_close(3.0, 2.99, 0.0)		
	});

}

