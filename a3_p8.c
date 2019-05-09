/*
JTSK-320111
a3_p4
SHOROUK G. AWWAD
s.awwad@jacobs-university.de
*/


#include <stdio.h>

int main (){
char line[100];// declaring a matrix
char S;
int n = 0;
int i;
fgets(line , sizeof(line) , stdin);
sscanf(line,"%c",&S);// asking the user to enter a value
scanf("%d", &n);
//if n<7 or >32 the program does stop
if (n>32|| n<7){
   return 1;
}
else if (S>='a' && S<='z'){


for (i=0; i<=n; i++ ){

    printf("%c\n",(int)S-i);


}}

else{

    return 1;


}


return 0;
}

