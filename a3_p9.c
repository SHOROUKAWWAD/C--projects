/*
JTSK-320111
a3_p4
SHOROUK G. AWWAD
s.awwad@jacobs-university.de
*/


#include <stdio.h>

int main (){
char c;
int n;
scanf("%c",&c);
scanf("%d",&n);
float S[100];
int i;
for (i=0; i<n; i++)
{
scanf("%f",&S[i]);


}

 switch(c){


   case 's': {

      float Z;
       for ( i=0; i<=n; i++){
        Z= Z+ S[i];
       }
       printf("the sum of the temperatures is %f\n",Z);
        break ;
   }

case 'p':
{


       for ( i=0; i <=n; i++){
    printf ("the matrix is %f\n",S[i]);
    }
    break;
}
case 't':
{

    for (i=0;i<=n;i++){
        S[i]=((S[i]*9)/5)+32;
        printf("%f\n",S[i]) ;

        break ;
    }
    }

default:
{
 float H;

 float y;
 y=0;
 for (i=0; i<=n; n++){

y = S[i]+y;
break;
}
H=y/i;

printf("the average is%f\n",H);
}

   }

return 0;
}
