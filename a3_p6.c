/*
JTSK-320111
a3_p4
SHOROUK G. AWWAD
s.awwad@jacobs-university.de
*/



#include <stdio.h>
int main (){
float x;
int n;
scanf ("%f",&x);
scanf("%d",&n);
while (n<=0){


printf("Input is invalid, reenter value\n");

scanf("%d",&n);

}
for (int i=1; i<=n; i++ )
{
    printf("%f\n",x);
}


return 0;
}
