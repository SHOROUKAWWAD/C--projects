/*
JTSK-320111
a3_p4
SHOROUK G. AWWAD
s.awwad@jacobs-university.de
*/


#include <stdio.h>
int main (){
char line[100]; // declaration of a matrix with 100 maximum numbers
char S;
int n = 0;
int i;
fgets(line , sizeof(line) , stdin);
sscanf(line,"%c",&S);// gets value from the user
scanf("%d", &n);

for (i=0; i<=n; i++ ){

    printf("%c\n",(int)S-i);// for loop to print the n characters after the character entered


}




return 0;
}
