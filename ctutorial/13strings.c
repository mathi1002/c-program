#include <stdio.h>
#include <string.h>
int main(){
char var1[6]={'m','a','t','h','i','v'};
printf("message: %s\n",var1);
char var2[12]="hello";
char var3[12]="world";
char var4[12];
int len;
strcpy(var4,var2);
printf("strcpy var2: %s\n",var4);
strcat(var2,var3);
printf("strcat var2: %s\n",var2);
len=strlen(var2);
printf("lenth: %d\n",len);
return 0;

}
