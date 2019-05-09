/*JTSK-320112
a1p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/
#include <stdio.h>
//defining min
#define min(a,b,c) {(((a)<(b))&&((a)<(c)))? a : (((b)<(a))&&((b)<(c)))? b : c;}
//defining max
#define max(a,b,c) {(((a)>(b))&&((a)>(c)))? a : (((b)>(a))&&((b)>(c)))? b : c;}
//defining mid-range
#define mid_range(a,b,c) { float z; z=((min(a,b,c))+ (max(a,b,c)))/2;printf ("The mid-range is: %f\n",z);}

int main(){
    float a,b,c;//declaring variables

scanf ("%f",&a);//taking values from the user
scanf ("%f",&b);
scanf ("%f",&c);
//calling the definition in main
mid_range (a,b,c);

return 0;
}
