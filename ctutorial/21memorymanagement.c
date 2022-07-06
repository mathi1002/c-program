#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char name[100];
	char *description;
	strcpy(name,"mathi");
	/*allocate dynamically memory*/
	description=malloc(30*sizeof(char));
	if(description=NULL){
		fprintf(stderr,"error unble to allocate memory\n");
	}
	else
	{strcpy(description,"zara ali a dps student");}
	description=realloc(description,100*sizeof(char));
	if(description=NULL){
                  fprintf(stderr,"error unble to allocate memory\n");
          }
          else
          {strcpy(description,"se is a 10th class");}
	  printf("name =%s\n",name);
	  printf("description =%s\n",description);
	  free(description);
}

