#include<stdio.h>

#include "../cli_test.h" // location of the header file

int main(int argc, char** argv){
	/*Call this function at the start of main()*/
	if(1){
		puts("Test Ran");
		goto fin;
	}
	
	puts("Here");

fin:
	return 0;
}
