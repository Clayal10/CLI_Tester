#include "example.hpp"
#include "../cli_test.hpp"




int main(int argc, char** argv){
	init_testing_mode(argc, argv);

	printf("%d\n", cli_test::testing_mode);

	return 0;
}
