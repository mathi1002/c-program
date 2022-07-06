#include <stdio.h>
#include <string.h>
int main() {
	int c;
	printf("enter a value:");
	c = getchar();
	printf("\n you enter: ");
	putchar(c);
	char str[100];
	printf("enter a value:");
       fgets(str);
	 printf("\n you enter: ");
        puts(str);
	char stri[200];
	int i;
	printf("enter a value:");
	scanf("%d %s",i, stri);
	printf("\n you enter: %s %d ",stri,i);
	
	
	return 0;
}
