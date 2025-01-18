#include<stdio.h>

/****Colored text macros****/
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_RESET "\x1b[0m"

/****Function Prototypes****/
//Called at the start of main. This will be the only function called in main.
//Returns: true or false (for now)
int init_testing_mode(int argc, char** argv);
//Called from init_testing_mode TODO something
//I need to decide what to do with the rest of the code in main if we are in test mode. It could still be ran or it could be skipped over some how?
void run_tests();

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
}
