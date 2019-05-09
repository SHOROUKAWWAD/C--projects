/*JTSK-320112
a4p4.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

// prototype
int compare ( const void* a1, const void* b1);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct person {

char name[30];
int age;

};
// compare names
int namescomp (const void* a1, const void* b1)
{
    const struct person* a = (const struct person*) a1;
    const struct person* b = (const struct person*) b1;

    if (strcmp(a->name, b->name) == 0)
    {
        return compare(a1, b1);

    }
    else
    {
        if(strcmp (a->name, b->name) > 0 )
            return 0;
        else
            return 1;
    }

}
// compare ages
int compare (const void* a1, const void* b1)
{
    const struct person* a = (const struct person*) a1;
    const struct person* b = (const struct person*) b1;


    if (a->age == b->age)
    {
        return namescomp(a1, b1);
    }
    else if (a->age < b->age)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// bubble sort
void bubble (struct person *a, int n, int compare(const void*, const void*))
{
    struct person swapp;


    int i, j;

    for (i = 0 ; i < ( n - 1 ); i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (compare(&a[j], &a[j+1] ) == 0)
            { //swapping names

                strcpy(swapp.name, a[j].name);
                strcpy(a[j].name, a[j+1].name);
                strcpy(a[j+1].name, swapp.name);
                //swapping age
                swapp.age = a[j].age;
                a[j].age = a[j+1].age;
                a[j+1].age = swapp.age;
            }
        }
    }


}


int main ()
{
    int size;
    scanf("%d", &size);
    struct person* ppl;
    ppl= (struct person*)malloc(sizeof(struct person)*size);

    for (int i=0; i<size; i++)
    {

        scanf("%s",ppl[i].name);
        scanf("%d",&(ppl[i].age));

    }
// sort for names
    bubble (ppl,size,namescomp);

    for (int i=0; i<size; i++)
    {

        printf("{%s, %d}; ",ppl[i].name,ppl[i].age);
    }
    printf("\n");
// sort for ages
    bubble (ppl,size,compare);

    for (int i=0; i<size; i++)
    {

        printf("{%s, %d}; ",ppl[i].name,ppl[i].age);
    }
    printf("\n");

    free(ppl);
}

