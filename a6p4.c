/*
JTSK-320111
a6_p2.c

SHOROUK GABR AWWAD
s.awwad@jacobs-university.de
*/


#include<stdlib.h>
#include <stdio.h>


void function (int h, float arr[]);//this function takes an array anddevides each element by 5

int main (){
    float *arr;
    arr = (float*)malloc (sizeof (float)*6);
    for (int i=0;i<6; i++){

        scanf("%f",arr[i]);

    }

printf("Before:\n");
    for ( int i=0; i<6; i++){//printing the value of the array before the division


        printf ("%.3f ",arr[i]);


    }


printf ("\n");
    function(6, arr);
    printf("After:\n");
    for (int i=0; i<6; i++){
        printf ("%.3f ",arr[i]);//printing the array after the division




    }
    printf("\n");
    free (arr);
    return 0;

}

 void function (int h, float arr[]){

for ( int i=0; i<h; i++){

     arr[i]= arr[i]/5;

}
 }

