
/*JTSK-32011
a5-p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>
#include <stdlib.h>
void prodminmax (int n,int arr[n]){
int max;
int min;
int product;
max =min = arr[0];

for (int i =1; i<n; i++){

  if(max < arr[i]) {
    max =arr[i];
  }

}
for (int j=1; j<n; j++){
        if (arr[j]!=0){
    if (min > arr[j]){
        min = arr[j];
    }
        }
}
product= min*max;
printf("the product=%d\n",product);
}

int main (){
int l;
scanf("%d",&l);
int *ptr;
char line [l];
ptr = (int*) malloc (sizeof (int)*l);
for (int i=0; i<l; i++){
scanf("%d",&ptr[i]);
}
prodminmax (l,ptr);

free(ptr);
return 0;
}
