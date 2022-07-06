#include<stdio.h>
int main(int argc, char *argv[]) {
	printf("program name %s\n",argv[0]);
	if(argc==2) {
		printf("the arguments supplied is %s\n",argv[1]);
	}
	else if(argc>2) {
		printf("the two arguments supplied is");
	}else
	{
		printf("one arguments supplied is");
	}}

