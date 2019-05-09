#include <stdio.h>
#include <string.h>
int count_consonants (char str[100]){

int consonant=0;
for (int j=0; j< strlen(str);j++){

       if (str[j]=='a'||str[j]=='A'||str[j]=='e'||str[j]=='E'||str[j]=='i'||str[j]=='I'||str[j]=='o'||str[j]=='O'||str[j]=='u'||str[j]=='U')
             {

          continue;

             }
        else {

                consonant++;

            }
}
return (consonant-1);

}

