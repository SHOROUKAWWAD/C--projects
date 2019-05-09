/*JTSK-320112
a1p1.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include<stdio.h>
#define swap(x,y,z) {z a=x; x=y; y=a;}
int main (){
int first,second;// two integers
double third,furth;// two floats
printf ("After swapping:\n");
scanf("%d",&first);//getting values from the user
scanf("%d",&second);

swap(first,second,int);//swapping the values
scanf("%lf",&third);
scanf("%lf",&furth);


swap(third,furth,double);//swapping the floats

printf ("%d\n",first);//printing the result
printf ("%d\n",second);
printf ("%lf\n",third);
printf ("%lf\n",furth);
return 0;
}
