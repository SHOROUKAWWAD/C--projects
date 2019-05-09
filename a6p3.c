/*JTSK-32011
a6.p1.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_lower (char *str){//declaration of the function
    int count;
    count =0;


   for (int i=0;i <= strlen(str); i++ ){

    if (str[i]>='a'&&str[i]<='z'){

      count++;//adding one with every lower case letter

    }
    else {

      continue;
    }


   }
printf("the number of lower case letters is:%d\n",count);//printing count
return count;
}

int main (){
char str[80];
char *stri;
stri= &str;


    for (int i=0; i>=0; i++){
fgets(str,sizeof(str),stdin);
if (*str=='/0'){
    exit(0);
}
  count_lower(stri);

    }

return 0;


}
