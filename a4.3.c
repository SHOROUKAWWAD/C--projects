/*JTSK-320112
a3p2.c
SHOROUKGABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
// sorting ascending
int ascending(const void * a1,
        const void * a2) {
        const int * a = (const int * ) a1;
        const int * b = (const int * ) a2;
        if ( * a < * b) {

                return 1;
        } else if ( * a > * b) {
                return -1;
        } else {
                return 0;
        }

}
// sorting descending
int descending(const void * a1,
        const void * a2) {
        const int * a = (const int * ) a1;
        const int * b = (const int * ) a2;
        if ( * a > * b) {

                return 1;
        } else if ( * a < * b) {
                return -1;
        } else {
                return 0;
        }

}
//print function
void print(int * array, int length) {

        for (int i = 0; i < length; i++) {

                printf("%d ", array[i]);
        }
        printf("\n");
}
//ending program
void end(int * array, int size) {

        exit(1);
}
//sorting descending
void sort1(int * array, int size) {
        qsort(array, size, sizeof(int), ascending);

}
//sorting ascending
void sort2(int * array, int size) {
        qsort(array, size, sizeof(int), descending);

}

int main() {
        int size;
        char c;
        scanf("%d", & size);
        int array[size];
        for (int i = 0; i < size; i++) {

                scanf("%d", & array[i]);

        }
        //pointer to a function
        void( * func_point[4])(int * , int) = {
                sort1,
                sort2,
                print,
                end
        };

        while (1) {//arbitrary input loop
                getchar();
                scanf("%c", & c);
                switch (c) {
                case 'a'://ascending sort case a

                        func_point[1](array, size);
                        func_point[2](array, size);
                        break;
                case 'd'://descending sort case d

                        func_point[0](array, size);
                        func_point[2](array, size);
                        break;
                case 'e'://exit case
                        func_point[3](array, size);
                }

        }
        return 0;
}
