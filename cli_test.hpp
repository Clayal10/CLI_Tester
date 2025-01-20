//To do:
//	I need a way to access the returns of the methods in test.c in a nice user friendly way.
//	Try this:
//		push back function pointers that take a CLI method return in as a parameter
//

#ifndef CLI_TEST_HPP
#define CLI_TEST_HPP

#include<iostream>
#include<vector>
#include<utility>
/****Colored text macros****/
//	cli_test::unit_tests.push_back(std::make_pair(std::string("test3"), (std::vector<int>){CLI::is_true(true), CLI::is_equal(1, 1)}));
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_RESET "\x1b[0m"

#define TEST(X, ...) \
	cli_test::unit_tests.push_back(std::make_pair(X, (std::vector<int>)__VA_ARGS__))

//For easy access in test.cpp
namespace cli_test{
	inline int testing_mode = 0;
	inline std::vector<std::pair<std::string, std::vector<int>>> unit_tests;
}


/****Testing object****/
class CLI{
public:
	//test_method is for printing
	void test_method(std::pair<std::string, std::vector<int>> parameters);

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
void test_main();

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
	return 1;
}

void run_tests(){
	puts("Tests will be run when this is implimented.");
	cli_test::testing_mode = 1;
	

	printf("number of tests: %ld\n", cli_test::unit_tests.size());

}

#endif
