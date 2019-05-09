
/*JTSK-320112
a3p3.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    char i;
    struct list* prev;
    struct list* next;
};

// add an element to the beginning of the array
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

// remove a node
struct list* removel(struct list* my_list, char value)
{
    int count = 0;
    struct list* next2;
    struct list* last;
    struct list* pointer;
    pointer = my_list;


    while(pointer != NULL)
    {

        if(pointer->i == value)
        {

            if(pointer->prev == NULL)
            {

                if(pointer->next == NULL)
                {//only one element in the array
                    free(pointer);
                    return NULL;
                }
                //if the prev = NULL but not the next
                pointer = pointer->next;
                pointer->prev = NULL;
                free(my_list);
                my_list  = pointer;
                count++;

            }

            else if (pointer->next == NULL)
            {   // if the next = NULL but not the prev
                pointer = pointer->prev;
                next2 = pointer->next;
                pointer->next = NULL;
                free(next2);
                count++;

            }

            else
            {  // if neither the prev nor the next = NULL
                last = pointer->prev;
                next2 = pointer->next;
                last->next = pointer->next;
                next2->prev = pointer->prev;
                free(pointer);
                count++;
            }
        }
        pointer = pointer->next;
    }


    if (count == 0)
    {
        printf("The element is not in the list!\n");
    }
    return my_list;
}

// printing list
void print (struct list* my_list)
{
    while (my_list != NULL)
    {
        printf("%c ", my_list->i);
        my_list = my_list->next;
    }
    printf("\n");
}

// printing list backwards
void backwards (struct list* my_list)
{
    struct list* n;
    n = my_list;

    while (n->next != NULL)
    {
        n = n->next;
    }
    while (n != NULL)
    {
        printf("%c ", n->i);
        n = n->prev;
    }
    printf("\n");
}

// disposing the list
void dispose(struct list* my_list)
{
    struct list *nextelem;
    while (my_list != NULL)
    {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}


int main()
{
    struct list* my_list = NULL;
    char c;
    int i;

    while (1)
    {
        scanf("%d", &i);
        getchar();
        switch (i)
        {
            case 1:// case 1 add an element to the front
                scanf("%c", &c);
                my_list = add_front(my_list, c);
                break;
            case 2:// remove corresponding elements
                scanf("%c", &c);
                my_list = removel(my_list, c);
                break;
            case 3:// print list
                print(my_list);
                break;
            case 4:// print it backwards
                backwards(my_list);
                break;
            case 5:// dispose list
                dispose(my_list);
                return 1;
            default:
                break;
        }
    }

    return 0;
}
