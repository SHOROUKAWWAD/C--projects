/*JTSK-320112
a2p4.c
shorouk Gabr awwad
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

          // declaring two functions
        void read(int m, int n, int p, int *** matrix);
        void print(int m, int n, int p, int *** matrix);

int main() {
// taking input from the user
        int m, n, p;
        scanf("%d", & m);
        scanf("%d", & n);
        scanf("%d", & p);
// dynamic memory allocation for the 3D matrix
        int ** * X = malloc(sizeof(int ** ) * m);

        for (int i = 0; i < m; i++) {

                X[i] = malloc(sizeof(int * ) * n);

                for (int j = 0; j < n; j++) {

                        X[i][j] = malloc(sizeof(int) * p);
                }

        }
// calling the functions read and print
        read(m, n, p, X);

        print(m, n, p, X);

// dynamic memory deallocation
        for (int i = 0; i < m; i++) {

                for (int j = 0; j < n; j++) {
                        free(X[i][j]);
                }
                free(X[i]);
        }
        free(X);

        return 0;
}
// the body of the function print
void print(int m, int n, int p, int *** matrix) {

        for (int k = 0; k < p; k++) {

                printf("Section %d:\n", k + 1);

                for (int i = 0; i < m; i++) {

                        for (int j = 0; j < n; j++) {

                                printf("%d ", matrix[i][j][k]);
                        }
                        printf("\n");
                }

        }

}
// the body of the function read
void read(int m, int n, int p, int *** matrix) {

        for (int i = 0; i < m; i++) {

                for (int j = 0; j < n; j++) {

                        for (int k = 0; k < p; k++) {
                                scanf("%d", & matrix[i][j][k]);
                        }

                }

        }

}
