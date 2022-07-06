#include <stdio.h>
#include <string.h>
union mathi{
int m;
float f;
char c[20];
};
int main() {
	union mathi math;
	math.m =100;
	math.f =20;
	printf("math.m :%d\n",math.m);
	printf("math.f :%f\n",math.f);
	strcpy(math.c,"mathi program crassed");
	printf("math.c :%s\n",math.c);
	return 0;
}
