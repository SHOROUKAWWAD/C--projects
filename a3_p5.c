/*
JTSK-320111
a3_p4
SHOROUK G. AWWAD
s.awwad@jacobs-university.de
*/



#include <stdio.h>
int main (){
int f;
int z;
int i;
scanf("%d",&z);
for (i=0;z <= 0;i++) {

    printf("Input is invalid, reenter value\n");
    scanf("%d",&z);

}

for (i=1; i<=z; ++i)
{
 f = i*24;
 if (i==1){
 printf("%d day = %d hours\n",i,f);

 }else{
 printf("%d days = %d hours\n",i,f);

 }

}

return 0;
}
