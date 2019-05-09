/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>
void prodivpowinv (float a, float b, float *prod, float *div, float *pwr, float *invb){
float pr;
float d;
float power;
float inverse;
div = &d;
*div = a/b;

prod =&pr;
*prod = a*b;

pwr =&power;
*pwr=1;
for (int i=1; i<=(int)b; i++){

    *pwr *= a;
}
 invb=&inverse;
 *invb = (1/b);
printf(" product%f\n",*prod);
printf("division%f\n",*div);
printf("power%f\n",*pwr);
printf("inverse%f\n",*invb);

}
int main (){
float a;
float b;
float *pr;
float *d;
float *power;
float *inverse;
printf("enter a=\n");
scanf("%f",&a);
printf("enter b=\n");
scanf("%f",&b);
prodivpowinv (a,b,pr,d,power,inverse);



return 0;
}
