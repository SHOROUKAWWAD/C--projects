#include <stdio.h>
void sscaan (int r, int c ,int matrix [r][c]){
    int k,h;


printf(" the matrix elements are\n");
for (k=0;k < r;k++){

    for (h=0;h<c;h++){

     printf("%d ", matrix[k][h]);

    }
    printf("\n");
}


}
void function (int o, int b, int matrix[o][b]){
int l,m;

 for (l=0;l<o;l++){
            for(m=0; m<b;m++){

if (m<l){
        printf("%d",matrix[l][m]);
}
            }
    }

}

int main (){

int colomn, rows;
scanf("%d",&rows);
scanf("%d",&colomn);
int array [rows][colomn];

int i,j;
    for (i=0;i<rows;i++){
for (j=0; j<colomn; j++){

    scanf("%d",&array[i][j]);

}
    }
    sscaan (rows,colomn,array);
printf("Under the secondary diagonal\n");
function (rows,colomn,array);
return 0;
}
