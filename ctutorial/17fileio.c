#include <stdio.h>
int main(){
	FILE *fp;
	fp=fopen("/home/mathi/Documents/ctutorial/sample.txt","w+");
	fprintf(fp,"this is a sample fprintf");
	fputs("this is a sample fputs",fp);
	fclose(fp);
}

