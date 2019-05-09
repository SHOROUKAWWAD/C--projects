
/*JTSK-320112
a1p4.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#define INTERMEDIATE

int main() {
        int n;
        int z = 0;
        int A[n];
        int B[n];

        scanf("%d", & n);//reading value from the user

        for (int i = 0; i < n; i++) {
                scanf("%d", & A[i]);
        }//reading the values of the array from the user

        for (int i = 0; i < n; i++) {
                scanf("%d", & B[i]);
        }

        #ifdef INTERMEDIATE//if the intermediate defined
        printf("The intermediate product values are:\n");
        for (int i = 0; i < n; i++) {
                printf("%d\n", A[i] * B[i]);
        }
        #endif // INTERMEDIATE

        for (int j = 0; j < n; j++) {
                z = z + A[j] * B[j];
        }
        printf("The scalar product is: %d\n", z);


        return 0;

}
