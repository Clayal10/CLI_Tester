#include<stdio.h>

#include "../cli_test.h" // location of the header file

int main(int argc, char** argv){
	/*Call this function at the start of main()*/
	init_testing_mode(argc, argv);
	test_main();

	puts("In Main");

	return 0;
}
