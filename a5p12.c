#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void replace (char array [80] , char cho, char gii){




for (int i=0; i<= strlen(array)&&(array[i]>='a'||array[i]<='z'); i++){

    if (array[i] == cho){
        array[i] = gii;

        }
        else{
            array[i]=array[i];
        }
   printf("%c ",array[i]);
    }



}
int main (){

char character;
char replacce;
char ptr[80];



for (int i=0; ptr[i]!='\0'; i++){
      printf("enter the first character\n");
      getchar();
      scanf("%c",&character);
      printf("enter the second character\n");
      getchar();
      scanf("%c",&replacce);
  fgets(ptr,sizeof(ptr),stdin);
  replace (ptr,character,replacce);
}



return 0;
}
