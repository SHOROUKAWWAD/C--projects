#include <stdio.h>
#include<math.h>
int main ()
{
    char c;
    float array [15];
int i;
    for ( i=0; i <15; i++)
    {

        scanf("%f",&array [i]);

        if (array[i] <0)
        {
           break;
        }
    }
    printf(" the array you entered \n");
    for (int j=0; j<=i; j++){
     printf ("%d: %f  ",j,array [j]);
    }
    printf ("\n type m or f or s or l\n");

    getchar();
    scanf("%c",&c);

switch (c){
    case'm':{
    gmean (array);
    }
    case'h':{
    highst(array);
    }
    case'l':{
    lowest(array);
    }
    case'f':{
    sum(array);
    }
    default :
        {
            printf("type the right character\n");
        }

}

    return 0;

}



int sum ( float matrix[])
{
  float summ;
summ = matrix[0];
for ( int k=1; k<=15 ; k++){
        if (matrix[k]> 0){
   summ = summ + matrix [k] ;
        }
   }

   printf("the sum of the elements: %f",summ);

return summ;
}

int lowest ( float matrix []){
float min ;
for (int k=0; k<15&& matrix[k]>0; k++ ){

    if ( min > matrix [k]){

        min = matrix [k];

    }
}

printf("the smallest value is: %f\n",min);

return min;
}

int highst (float matrix[]){
float max ;
max = matrix [0];
for ( int k=0; k<15; k++){
    if (matrix[k]>max){
        max = matrix[k];
    }
}
printf("the maximum value is: %f\n", max);
return max;




}


int gmean (float matrix [])
{
double mean;
double sum;
double x;
    sum = 1.0;

    for (int k =0; k< 15 ; k++){
        x=k;
        if (matrix [k]>=0)
        {
            sum = sum * matrix [k];
        }

        else{
             break;
        }
    }

    mean = pow(sum,1/x);

    printf("the geometric mean = %lf\n", mean);

    return mean;

}




