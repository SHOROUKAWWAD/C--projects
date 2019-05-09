#include <stdio.h>
#include <stdio.h>

int main (){

int *dyn_array , how_many , i;

printf ("How many elements?");
scanf ("%d",&how_many);

dyn_array = (int*) malloc(sizeof(int)* how_many);
if (dyn_array == NULL)
    exit (1);
for (i=0; i< how_many ; i++){

    printf ("\n Input number %d:", i);
    scanf ("%d",&dyn_array [i]);



}


i=0;
printf ( "your array is {");
while (i< how_many) {

    printf ("%d", dyn_array);
    i++;

}

printf ("\b\b}.\n");
free(dyn_array);
return 0;






}
