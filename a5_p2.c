/* JTSK-320111
a5-p1.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/


# include <stdio.h>
# include <string.h>

int main (){
    int k;
char statement [50];
fgets(statement, sizeof(statement),stdin);
statement [strlen(statement) - 1]='\0';// takes whatever string from the user
k =strlen (statement);
 for ( int i=0; i<k; i++ )
    // if the reminder of the devision  is zero the letter will be typed without spaces from the matrix statement
 if (i%2==0){


    printf ("%c\n",statement[i]);
//if the reminder of the division by two wasn't zero, print space before the letter

 }

else {



    printf ( " %c\n", statement[i]);
}



return 0;
}
