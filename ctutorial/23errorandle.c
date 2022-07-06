#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main() {
	FILE *fp;
	fp=fopen("file.txt", "rb");
	if(fp=	NULL) {
		printf("value of errno:%d\n", errno);
		printf("error opening te fie:%s\n", strerror(errno));
		perror("file.txt");
		exit(EXIT_FAILURE);
		printf("i will not be prited\n");
	}
	else {
		fclose(fp);
		exit(EXIT_SUCCESS);
		printf("i will not be prited\n");
	}
	return 0;
}

