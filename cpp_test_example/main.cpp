#include "example.hpp"
#include "../cli_test.hpp"




int main(int argc, char** argv){
	init_testing_mode(argc, argv);
	test_main();
	run_tests();

	puts("in main");
	return 0;
}
