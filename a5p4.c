/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/




#include <stdio.h>
#include <string.h>
int count_consonants (char str[100]){

int consonant=0;
for (int j=0; j< strlen(str);j++){

       if (str[j]=='a'||str[j]=='A'||str[j]=='e'||str[j]=='E'||str[j]=='i'||str[j]=='I'||str[j]=='o'||str[j]=='O'||str[j]=='u'||str[j]=='U'|| str[j]==' ')
             {

          continue;

             }
        else {

                ++consonant;

            }

}
return (consonant-1);

}

int main (){
 char statement[100];
for (int i=0; statement[i]!='\n'; i++){

fgets(statement,sizeof(statement),stdin);


count_consonants(statement);

printf("Number of consonants=%d\n",count_consonants(statement));



}
return 0;

}
