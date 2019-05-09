
/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>

void sscaan (int r,int matrix [r][r]){
    int k,h;


printf(" the matrix elements are\n");
for (k=0;k < r;k++){

    for (h=0;h<r;h++){

     printf("%d ", matrix[k][h]);

    }
    printf("\n");
}


}
void function (int o, int matrix[o][o]){
int l,m;

 for (l=0;l<o;l++){
            for(m=0; m<o;m++){

if (m<l){
        printf("%d",matrix[l][m]);
}
            }
    }

}

int main (){

int  rows;
scanf("%d",&rows);

int array [rows][rows];

int i,j;
    for (i=0;i<rows;i++){
for (j=0; j<rows; j++){

    scanf("%d",&array[i][j]);

}
    }
    sscaan (rows,array);
printf("Under the secondary diagonal:\n");
function (rows,array);
return 0;
}
