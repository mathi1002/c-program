#include<stdio.h>
#define message_for(a,b)\
	printf(#a"and"#b"we love you\n");
#ifndef (MESSAGE)
   #define MESSAGE "you wis you"
#endif 
int main(){
	message_for(mathi,love);
	/*printf("%s",MESSAGE);*/
	return 0;
	}
