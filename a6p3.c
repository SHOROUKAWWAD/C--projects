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


    printf ("\n type m or f or s or l\n");
    getchar();
    scanf("%c",&c);

switch (c){
    case 'm' :{
    gmean (array);
    break;
    }
    case 'h':{
    highst(array);
    break;
    }
    case 'l':{
    lowest(array,i);
    break;
    }
    case 'f':{
    sum(array);
    break;
    }
    default :
        {
            printf("type the right character\n");
            break;
        }

}

    return 0;

}



int sum ( float matrix[])
{
  float summ;
summ = matrix[0];
for ( int i=1; i<=15 ; i++){
        if (matrix[i]> 0){
   summ = summ + matrix [i] ;
        }
   }

   printf("the sum of the elements: %f",summ);

return summ;
}

int lowest ( float matrix [],int j){
float min ;

for (int k=0; k<j&& matrix[k]>0; k++ ){

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
for ( int i=0; i<15; i++){
    if (matrix[i]>max){
        max = matrix[i];
    }
}
printf("the maximum value is: %f\n", max);
return max;




}


int gmean (float matrix [])
{
double mean;
double sumn;
double x;
    sumn = 1.0;

    for (int i =0; i< 15 ; i++){
        x=i;
        if (matrix [i]>=0)
        {
            sumn = sumn * matrix [i];
        }

        else{
             break;
        }
    }

    mean = pow(sumn,1/x);

    printf("the geometric mean = %lf\n", mean);

    return mean;

}


