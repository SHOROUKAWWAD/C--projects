/*JTSK-320112
a1p7.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/
#include <stdio.h>

        void charset3bit(unsigned char C, int a, int b, int d);
int main() {//declaring variables
        unsigned char f;
        int a;
        int b;
        int c;
        scanf("%c", & f);
        scanf("%d", & a);
        scanf("%d", & b);
        scanf("%d", & c);
        //the decimal representation of the variable
        printf("The decimal representation is: %d\n", (int) f);

        charset3bit(f, a, b, c);
        return 0;
}
//the body of the function
void charset3bit(unsigned char C, int a, int b, int d) {
        printf("The binary representation is: ");
        for (int i = 8; i > 0; i--) {
                if (C & (1 << (i - 1))) {
                        printf("1");
                } else {
                        printf("0");
                }

        }
        printf("\nAfter setting the bits: ");
        for (int i = 8; i > 0; i--) {
                if ((i == (a + 1)) || (i == (b + 1)) || (i == (d + 1))) {
                        printf("1");
                } else if (C & (1 << (i - 1))) {
                        printf("1");
                } else {
                        printf("0");
                }
        }
        printf("\n");

}
