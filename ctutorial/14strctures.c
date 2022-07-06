#include <stdio.h>
#include <string.h>
struct mathi{
	char name[10];
	int age;
	char aim[20];
};
void printmathi(struct mathi user);
int main() {
	struct mathi user1;
	struct mathi user2;
	strcpy(user1.name, "mathialagan");
	strcpy(user1.aim, "hacker");
	user1.age =20;
	strcpy(user2.name, "mathivanan");
         strcpy(user2.aim, "hackers");
          user2.age =21;
	  printmathi(user1);
	  printmathi(user2);
	  return 0;}

void printmathi(struct mathi user){
printf("user name: %s\n", user.name);
printf("user aim: %s\n", user.aim);
printf("user age: %d\n", user.age);


}


