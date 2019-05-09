/*JTSK-320112
a2p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
//declaring functions
void Multiplication(int ** * a, int ** * b, int m, int n, int p);
void print(int m, int p, int ** * matrix);
void read(int m, int p, int ** * array);

int main() { // taking values from the user
        int m, p, n;
        scanf("%d", & m);
        scanf("%d", & p);
        scanf("%d", & n);
      // allocating memory
        int **arr1 = malloc(sizeof(int* )* m);
        int **arr2 = malloc(sizeof(int* )* p);

        for (int i = 0; i < m; i++) {
                arr1[i] = malloc(sizeof(int)*p);
        }
        for (int i = 0; i < p; i++) {
                arr2[i] = malloc(sizeof(int)*n);
        }
       //calling reading functions and printing functions
        read(m, p, & arr1);
        read(p, n, & arr2);
        printf("Matrix A:\n");
        print(m, p, & arr1);
        printf("Matrix B:\n");
        print(p, n, & arr2);
        Multiplication( & arr1, & arr2, m, n, p);

        for (int i = 0; i < m; i++) {

                free(arr1[i]);
        }
        free(arr1);

        for (int i = 0; i < p; i++) {

                free(arr2[i]);
        }
        free(arr2);

        return 0;
}



// functions' bodies
void Multiplication(int ** * a, int ** * b, int m, int n, int p) {

        int ** result = malloc(sizeof(int * ) * m);
        for (int i = 0; i < m; i++) {
                result[i] = malloc(sizeof(int) * n);

        }
        printf("The multiplication result AxB:\n");

        for (int i = 0; i < m; i++) {

                for (int j = 0; j < n; j++) {
                        result[i][j] = 0;

                        for (int k = 0; k < p; k++) {

                                result[i][j] += ((*a)[i][k]) * ((*b)[k][j]);

                        }
                        printf("%d ", result[i][j]);
                }
                printf("\n");
        }

        for (int i = 0; i < m; i++) {
                free(result[i]);
        }
        free(result);
}




void print(int m, int p, int ** * matrix) {

        for (int i = 0; i < m; i++) {
                for (int j = 0; j < p; j++) {

                        printf("%d ", ( * matrix)[i][j]);

                }
                printf("\n");
        }

}




void read(int m, int p, int ** * array) {

        for (int i = 0; i < m; i++) {
                for (int j = 0; j < p; j++) {

                        scanf("%d", &(*array)[i][j]);

                }

        }

}
