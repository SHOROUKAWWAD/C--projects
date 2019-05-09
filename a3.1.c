/*JTSK-320112
a3p2.c
SHOROUKGABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

        struct list {

                int info;
                struct list * next;

        };
        //add at the end
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
// inserting element at the front

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
// removing first element
struct list* dispose(struct list* my_list) {
        struct list* nextelem;
        if (my_list != NULL) {
                nextelem = my_list;
                my_list = my_list -> next;
                free(nextelem);

        }
        return my_list;
};

// print function
void print_list(struct list * my_list) {
        struct list* p = my_list;
        while (p != NULL) {
                printf("%d ", p -> info);
                p = p -> next;
        }
        printf("\n");
}
// insertion at some position
struct list * move_position(struct list * my_list, int i, int l) {

        struct list* insertel;

        struct list* pointer;
        insertel = (struct list* ) malloc(sizeof(struct list));


        if (i<0){

        printf("Invalid position!\n");
        return my_list;

        }


        for (int j = 0; j < i; j++) {
                if (my_list  == NULL ) {
                        printf("Invalid position!\n");
                        return my_list;
                } else {
                        pointer = my_list;
                        my_list = my_list -> next;

                }

        }

        pointer -> next = insertel;
        insertel -> next = my_list;
        insertel -> info = l;

        return my_list;
};
// reverse function
struct list * reverse(struct list * my_list) {
        struct list * prev;
        struct list * next2;
        struct list * current;

        prev = NULL;
        current = my_list;
        next2 = current -> next;

        while (1) {
                current -> next = prev;
                prev = current;
                current = next2;
                if (next2 -> next == NULL) {
                        current -> next = prev;
                        break;
                } else {
                        next2 = next2 -> next;
                }
        }
        return current;

};

int main() {
        char c;
        int i;
        int b;
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
                case 'i':
                        scanf("%d",&b);
                        scanf("%d",&i);

                        move_position(list1,b,i);
                        break;

                case 'R':

                      list1= reverse(list1);
                        break;

                case 'q':
                        return 0;
                        break;


                }

        }
}
