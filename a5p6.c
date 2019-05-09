/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>
#include <stdlib.h>
void function (int *arr,int z){
    int max;
    int max2;
    int k;
    max=0 ;

    for (k=0; k<=z; k++){

        if (max < arr[k]){
            max2 = max;
            max =arr[k];
        }
    }

    printf("the two maximum values %d %d\n",max2,max);
}
int main (){
    int i , j;


scanf("%d",&i);
 char line [i];
int *ptr;
ptr = (int*) malloc(sizeof(int)*i);

for (j=0;j<=i; j++){
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%d",&ptr[j]);


}
function(ptr,i);
       free(ptr);
return 0;
}
