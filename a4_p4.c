#include <stdio.h>
int X;
char C;
int Y;

void Func (int g,int h, char k){

   for (int j=1;j<=h;j++){
    for (int i=g; i>=0; i-- )
    {
    printf("%c",k);
break;
     }
printf("\n");
}
}




int main(){
scanf("%d",&Y);
scanf ("%d",&X);
scanf("%c",&C);

Func (X,Y,C);


return 0;

}
