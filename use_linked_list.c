/*JTSK-320112
a3p1.c
SHOROUKGABR AWWAD
s.awwad@jacobs-university.de*/

#include "linked_list.h"
int main() {
        char c;
        int i;
        struct list * list1 = NULL;

        while (1) {

                scanf("%c", & c);
                switch (c) {

                case 'a':
                        scanf("%d", & i);
                        getchar();
                        list1 = push_back(list1, i);
                        break;
                case 'b':
                        scanf("%d", & i);
                        getchar();
                        list1 = push_front(list1, i);

                        break;
                case 'r':
                        list1 = dispose(list1);

                        break;
                case 'p':
                        print_list(list1);
                        break;
                case 'q':
                        return 0;
                        break;
                }

        }
}
