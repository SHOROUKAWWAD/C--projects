/* JTSK-320111
a6-p1.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/
#include <stdio.h>
int n;
void incursive (){//declaring the function

 int i, j = 0;


    for(i = 2; i <= n/2; ++i)
    {

        if(n%i == 0)
        {
            j = 1;
            break;
        }
    } // for loop to see if n is divisible by any number other than itself using mod operant
if (n==1){
  printf("%d is not prime\n",n);
}
else if (j == 0)
         {
          printf("%d is prime\n", n);
         }
        else{
          printf("%d is not prime\n", n);
        }


}
int main(){

scanf("%d",&n);// scan the value of n


incursive();

return  0;
}
