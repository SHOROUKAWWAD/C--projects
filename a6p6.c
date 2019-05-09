/*JTSK-320111
a6-p6.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>
int n;
void recursive(){// definition of the recursive function with out passing a reference
int i;
for (i=n; i>=1; i--){

    printf("%d\n",i);

}

}

int main() {

scanf("%d",&n);//taking the initial value

recursive ();// call for the recursive function





return 0;
}
