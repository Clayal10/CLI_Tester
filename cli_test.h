#ifndef CLI_TEST_H
#define CLI_TEST_H

#include<stdio.h>
#include<stdlib.h>

#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_RESET "\x1b[0m"

//Prototypes
void test_main();
static inline void init_testing_mode(int argc, char** argv);
static inline void run_tests();

//Objects
/*
 * Ultimately, I need a list of boolean values for each unit test.
 * The cpp version uses a macro to have each unit test push back a list of booleans as returns from class methods.
 * We could do the following:
 * 	- Use a struct of functions for our boolean return methods, similar to a class.
 * 	- Could us va_args (see if we can avoid)
 * 		- Have a list of size 2, index 0 being test name and index 1 being a list of booleans.
 * 	- Use some sort of dynamically sized list for all the unit tests, esentially create our own std::vector.
 *
 *Example of what i want to impliment in CLI struct: 
  	foo_int (int a)  
	foo_char (char b)  
	foo_float_int (float c , int d)
	
	#define foo(_1, ...) _Generic((_1),                                  \
	                              int: foo_int,                          \
	                              char: foo_char,                        \
	                              float: _Generic((FIRST(__VA_ARGS__,)), \
	                                     int: foo_float_int))(_1, __VA_ARGS__)
	#define FIRST(A, ...) A
 *
 * */



#define is_equal()
struct CLI{
	int is_equal()
}

struct unit_test{
	char* name;
};


void init_testing_mode(int argc, char** argv){
	if(argc <= 1){
		return;
	}
	char test_flag[7] = "--test";
	for(int i=0; i<6; i++){
		if(argv[1][i] == '\0'){
			return;
		}
		if(argv[1][i] != test_flag[i]){
			return;
		}
	}
	run_tests();
}


void run_tests(){
	
	
	puts(COLOR_GREEN "Testing" COLOR_RESET);

	exit(0);

}

#endif

