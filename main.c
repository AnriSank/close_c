#include "stdio.h"
#include "stdlib.h"

#define RED	"\033[1;31m"
#define GREEN	"\033[1;32m"
#define BLUE	"\033[1;34m"
#define RESET	"\033[0m"


int main(){
	printf("This is"BLUE" a new version"RESET" of executable file\n");
	puts("hi edited");
	puts("hi");
	puts(RED"hi my");
	puts(GREEN"hi my");
	return 0;
}
