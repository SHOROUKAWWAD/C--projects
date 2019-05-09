/*JTSK-320111
A6-P1.C
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/



#include <stdio.h>
int function ( int n ,double V1[n],double V2[n]){

double product;
double max1;
double max2;
double min1;
double min2;
int j1=0;
int j2=0;
int u1=0;
int u2=0;
max1 = V1[0];
max2 = V2[0];
min1 = V1[0];
min2 =V2[0];
for (int i=0; i< n ;i++){

    product += (V1[i]*V2[i]);

}
for (int i=0; i<n; i++ ){

    if (max1< V1[i]){

        max1 =V1[i];
       j1 = i;
       }
    }
 for (int i=0; i<n; i++ ){
    if (max2 < V2[i]){

        max2 = V2[i];
        j2=i;
    }
}
for (int i=0; i<n; i++ ){
    if (min1 > V1[i]){
        min1 = V1[i];
        u1=i;
    }
}
for (int i=0; i<n; i++ ){
    if (min2 >V2[i]){
        min2 = V2[i];
        u2 =i;
    }




}

printf("Scalar product=%lf\n",product);
printf("The smallest = %lf\n",min1);
printf("Position of smallest = %d\n",u1);
printf("The largest = %lf\n",max1);
printf("Position of largest = %d\n",j1);
printf("The smallest = %lf\n",min2);
printf("Position of smallest = %d\n",u2);
printf("The largest = %lf\n",max2);
printf("Position of largest = %d\n",j2);


}
int main (){


int n;
scanf("%d",&n);
double V1[n];
double V2[n];


for (int i=0; i<n; i++){
  scanf("%lf",&V1[i]);


}
for (int i=0; i<n; i++){

    scanf("%lf",&V2[i]);
}

function (n,V1,V2);

return 0;

}
