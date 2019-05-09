/*JTSK-320112
a1p6.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/
#include <stdio.h>

int main() {

        unsigned char f;
        scanf("%c", & f);//taking input from the user
        // printing the decimal representation
        printf("The decimal representation is: %d\n", (int) f);
        printf("The binary representation is: ");
        //binary representation
        for (int i = 8; i > 0; i--) {
                if (f & (1 << (i - 1))) {

                        printf("1");
                } else {

                        printf("0");
                }
        }
        printf("\n");
        return 0;
}
