/*JTSK-320112a2p1.c
shorouk Gabr awwad
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
char array[100];
char array2[100];
fgets(array,sizeof(array),stdin);// taking value from the user
fgets(array2,sizeof(array),stdin);
strtok(array,"\n");//split the string into tokens
strtok(array2,"\n");//split the string into tokens
 char *array3= malloc(sizeof(char)*(strlen(array)+strlen(array2)));
strcpy(array3,array);
strcat(array3,array2);
printf("Result of concatenation: %s\n",array3);

free(array3);
return 0;
}
