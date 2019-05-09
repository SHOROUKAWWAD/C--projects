#include <stdio.h>
#include <stdlib.h>
int main (){

char ch;
FILE *fp1 ,*fp2;
fp1 =fopen("src.txt", "r");

if (fp2 == NULL) {



 printf ( "cannot open file! \n");
  exit (1);  }

fp2 = fopen("text.txt", "w");
 if (fp2 == NULL) {



 printf ( "cannot open  test file! \n");
  exit (1);

}
ch = getc (fp2);
while (ch != EOF){

   putchar (ch);
   ch = getc (fp2);


}

fclose (fp1);
fclose (fp2);




return 0;



}
