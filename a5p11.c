
/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>
void count_insensetive(char *str, char cha){
    int count;
    count =0;
    fgets(str,sizeof (char)*100,stdin);

for (int i=0; i <strlen(str);i++){

    if (str[i]== tolower(cha)||str[i]== toupper(cha)){

        count++;
    }

}

printf("the number of %c in the string =%d\n",cha,count);
}




int main (){

    char characters;
    printf("enter the character\n");
    scanf("%c",&characters);
char *str;

     str = (char*)malloc(sizeof (char)*100);

for (int i =0; i>=0 ; i++){

       fgets(str,sizeof(str),stdin);

       count_insensetive (str,characters);

}



free (str);

return 0;
}










