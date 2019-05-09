/*JTSK-320112
a2p2.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>
int main (){

int n;

scanf("%d",&n);
float *str1,*str2;// declaring two float pointers

float* arr = malloc(sizeof (float)*n);// assigning a memory to an array of floats
str1=arr;

int i;//counter
for (i=0;i<n;i++){
   scanf ("%f",&arr[i]);// taking value from user

   }
str2 = &arr[i];
// loop to check for the negative element
   while (str1!=str2){
if (*str1<0){
      printf("Before the first negative value: %d elements\n",(int)(str1-arr));
      break;
}
str1++;
}


free(arr);
return 0;
}
