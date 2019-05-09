/*JTSK-320112
a3p1.c
SHOROUKGABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

        struct list {

                int info;
                struct list * next;

        };
        //add at the end
        struct list * push_front(struct list * my_list, int value);
        struct list * push_back(struct list * my_list, int value);
        struct list * dispose(struct list * my_list);
        void print_list(struct list * my_list);
