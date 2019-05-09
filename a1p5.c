/*
JTSK-320111
a6_p1.c

SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/


#include <stdio.h>
 int i;
 int j;

 int function (int f, char g){

 for (i=f; i>0; i--){
    for (j=1; j<=f ; j++){

        printf ("%c",g);

    }

    printf ("\n");
f--;

 }
 return 0;
 }









 int main (){


 int H;
 char ch;
 scanf("%d", &H);
 getchar();
 scanf("%c",& ch);
 function(H,ch);


 return 0;

 }
