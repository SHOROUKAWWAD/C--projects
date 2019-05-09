/*JTSK-320111
a6-p10.c
SHOROUK GABR AWWAD
s.awwad@jacobs university.de*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Open two files
   FILE *fp1 = fopen("text1.txt", "r");
   FILE *fp2 = fopen("text2.txt", "r");


   FILE *fp3 = fopen("merge.txt", "w");//open a third file
   char c;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("error");
         exit(0);
   }


   while ((c = fgetc(fp1)) != EOF)//get a char from fp1 to fp3 and keep doing that if you didn't reach the end of the file
      fputc(c, fp3);

fprintf(fp3,"\n");

   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);



   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
