/*JTSK-320112
a1p1.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#define itb(char,type) { type a= ((char) & (1)); printf ("The least significant bit is: %d\n",a);}
// macro gives the last significant digit in the binary representation of the char
 int main (){
 char f;
 scanf("%c",&f);// taking values from the user
 printf ("The decimal representation is: %d\n",f);// the decimal representation
itb(f,int);





 }
