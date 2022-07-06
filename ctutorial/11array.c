#include <stdio.h>
int main(){
int i;
int age[10]={10,20,30,40,50,60,80,90,100};
printf("%d\n", age[8]);
for(int i=0; i<sizeof(age)/sizeof(age[0]); i++){
age[i] =i;
}
}

