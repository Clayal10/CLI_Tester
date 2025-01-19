//To do:
//	I need a way to access the returns of the methods in test.c in a nice user friendly way.
//	Try this:
//		push back function pointers that take a CLI method return in as a parameter
//

#ifndef CLI_TEST_HPP
#define CLI_TEST_HPP

#include<iostream>
#include<vector>
/****Colored text macros****/
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_RESET "\x1b[0m"


//list of function pointers. Functions will be the CLI class methods
typedef void TEST;
//For easy access in test.cpp
namespace cli_test{
	inline int testing_mode = 0;
	std::vector<void(*)()> unit_tests;
}


/****Testing object****/
class CLI{
public:
//Worried about the scope of the template here	
	template <typename T>
	static int is_equal(T first, T second){
		return first == second;
	}
	template <typename T>
	static int is_not_equal(T first, T second){
		return first == second;
	}
	static int is_true(bool condition){
		return condition;
	}
	static int is_false(bool condition){
		return !condition;
	}
};


/****Function Prototypes****/
//Called at the start of main. This will be the only function called in main.
//Returns: true or false (for now)
inline int init_testing_mode(int argc, char** argv);
//Called from init_testing_mode TODO something
//I need to decide what to do with the rest of the code in main if we are in test mode. It could still be ran or it could be skipped over some how?
inline void run_tests();


/****Function Definitions****/ //may move to a seperate file eventually.
int init_testing_mode(int argc, char** argv){
	if(argc <= 1){
		return 0;
	}
	char test_flag[7] = "--test";
	for(int i=0; i<6; i++){
		if(argv[1][i] == '\0'){
			return 0;
		}
		if(argv[1][i] != test_flag[i]){
			return 0;
		}
	}
	//At this point we are in test mode.
	run_tests();

	return 1;
}

void run_tests(){
	puts("Tests will be run when this is implimented.");
	cli_test::testing_mode = 1;
}

#endif
