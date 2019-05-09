/* JTSK-320111
a5-p1.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/




#include <stdio.h>
#include <math.h>

int main (){

float i , j,k,t;


double r,y;

scanf ("%f",&i);
scanf ("%f", &j);
scanf ("%f", &k);

for (t = i; t<=j; t+=k)// for every t<j, the program repeats the loop taking i as an initial value and stepping by the step that the user determines
{
    r = 2 *M_PI*t;
    y= t*t*M_PI;
    printf ("%f %f %f\n",t,y,r );
}





return 0;
}





