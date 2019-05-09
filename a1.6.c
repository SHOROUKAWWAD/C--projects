/*JTSK-320112
a1p5.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>

int main() {

        unsigned char f;
        scanf("%c", & f); //taking input from the user
        // printing the decimal representation
        printf("The decimal representation is: %d\n", (int) f);
        printf("The backwards binary representation is: ");
        //binary representation
        for (int i = 0; i < 8; i++) {

                if (f & (1 << i)) {

                        printf("1");
                } else {
                        if (i == 7 || i == 6) {

                        } else {

                                printf("0");
                        }
                }
        }
        printf("\n");
        return 0;
}
