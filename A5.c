
#include <stdio.h>
File *fptr;
fptr = fopen ("myfile.text","r");
if (fptr ==NULL){
    printf ("some error occurred!\n");

    exit (1);



}
fclose(fptr);
