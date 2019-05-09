/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/




#include <stdio.h>
#include<math.h>
//this program is designed to take values of an array from the user and then process some calculation to give back sum , highest value, least value.

float sum (float arr[]){// function to give the sum of the elements of the array
float summation = 0.0;
for(int i = 0; i < 15; i++){
    if (arr[i] < 0.0){
        break;
    }
    summation = summation + arr[i];
}
printf("the sum is: %f", summation);
return summation;
}

int lowest ( float matrix []){//function to give the lost value
float min = matrix[0] ;
for (int i=1; i<15; i++ ){
    if (matrix [i] <= 0){
        break;
    }
    else if ( min > matrix [i]){
        min = matrix [i];
    }
}
printf("the smallest value is: %f\n",min);
return min;
}

int highst (float matrix[]){//the highest
float max ;
max = matrix [0];
for ( int i=1; i<15; i++){
        if (matrix[i]>=0){
    if (matrix[i]> max){
        max = matrix[i];
    }}
    else {
        break;
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


int main (){
char c;
float array [15];
int i;
for ( i=0; i <15; i++){
    scanf("%f",&array [i]);
    if (array[i] < 0){
        break;
        }
    }
printf ("\n type m or f or h or l\n");
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
        lowest(array);
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
