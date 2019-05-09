/*JTSK-320112
a3p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

struct list {

        char i;

        struct list* next;
        struct list* prev;

};
//adding element to the beginning of the  list

struct list * add_front(struct list * my_list, char r) {
        struct list * front = malloc(sizeof(struct list));
        front -> i = r;
        front -> next = my_list;
        front -> prev = NULL;

        if (my_list == NULL) {

                return front;
        }
        my_list -> prev = front;
        return front;
};
// remove all lists carrying that specific value

struct list* removel (struct list* my_list, char l){
    struct list *first, *last , *pointer;
    int count =0;
    first = my_list->prev;
    last = my_list-> next;
    pointer = my_list;
while (my_list!=NULL){

    if (l== my_list->i){
    if (my_list->next == NULL&&my_list->prev==NULL){
        count++;
        return NULL;


    }else if (last == NULL && first!= NULL){
    first->next=NULL;
    free(my_list);
    count++;
    }else if (last!= NULL && first ==NULL){
    last->prev= NULL;
    free (my_list);
    count++;
    }else {

    last->prev= first;
    first->next = last;
    free (my_list);
    count++;
    }


}

    my_list= my_list->next;

}
if (count==0){
    printf("the element doesn't exist in the list!\n");

}

return my_list;


};

//printing list
void print(struct list * my_list) {

        while (my_list != NULL) {

                printf("%c ", (my_list -> i));

                my_list = my_list -> next;

        }
        printf("\n");
};
//print the whole list  back wards
void reverse(struct list * my_list) {
        struct list * current;
        current = my_list;

        while (current -> next != NULL) {
                current = current -> next;
        }
        while (current != NULL) {
                printf("%c ", current -> i);
                current = current -> prev;
        }
        printf("\n");
}
// disposing the elements of the list
void dispose(struct list * my_list) {
        struct list * nextelem;
        while (my_list != NULL) {
                nextelem = my_list -> next;
                free(my_list);
                my_list = nextelem;
        }
}

int main() {

        char c;
        int i;
        int b;
        struct list * list1 = NULL;

        while (1) {

                scanf("%d", & i);
                 getchar();
                switch (i) {

                case 1:


                        scanf("%c", & c);
                        list1 = add_front(list1, c);
                        break;
                case 2:

                        scanf("%c", & c);
                        list1 = removel(list1, c);

                        break;
                case 3:
                        print(list1);

                        break;
                case 4:
                        reverse(list1);
                        break;
                case 5:
                        dispose(list1);
                        break;

                }

        }

}
