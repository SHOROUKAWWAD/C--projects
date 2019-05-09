/*JTSK-320112
a3p1.c
SHOROUKGABR AWWAD
s.awwad@jacobs-university.de*/

#include "linked_list.h"

struct list * push_front(struct list * my_list, int value) {
        struct list * newel;
        newel = (struct list * ) malloc(sizeof(struct list));
        if (newel == NULL) {
                printf("Error  allocating  memory\n");
                return my_list;
        }
        newel -> info = value;
        newel -> next = my_list;
        return newel;
};

struct list * push_back(struct list * my_list, int value) {
        struct list * cursor, * newel;
        cursor = my_list;
        newel = (struct list * ) malloc(sizeof(struct list));
        if (newel == NULL) {
                printf("Error  allocating  memory\n");
                return my_list;
        }
        newel -> info = value;
        newel -> next = NULL;
        if (my_list == NULL)
                return newel;
        while (cursor -> next != NULL)
                cursor = cursor -> next;
        cursor -> next = newel;
        return my_list;
};

struct list * dispose(struct list * my_list) {
        struct list * nextelem;
        if (my_list != NULL) {
                nextelem = my_list;
                my_list = my_list -> next;
                free(nextelem);

        }
        return my_list;
};

void print_list(struct list * my_list) {
        struct list * p = my_list;
        while (p != NULL) {
                printf("%d ", p -> info);
                p = p -> next;
        }
        printf("\n");
}
