/*JTSK-320112
a4p4.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// prototype
int compare ( const void* a, const void* b);


struct person
{

    char name[30];
    int age;

};


// compare  ages
int compare ( const void* a, const void* b)
{

    const struct person* a1 = (const struct person *)a;
    const struct person* b1 = (const struct person *)b;

    if (a1->age == b1->age)
    {
// if they are equal compare names
        return namescomp(a1,b1);
    }
    else if (a1->age > b1->age)
    {

        return 1;
    }
    else
    {
        return 0;

    }
}

// compare names
int namescomp(const void* a, const void* b)
{
    const struct person* a1 = (const struct person *)a;
    const struct person* b1 = (const struct person *)b;
    if (strcmp(a1->name, b1->name) == 0)
    {
        return compare (a, b);

    }//if they are equal compare the ages
    else
    {
        if(strcmp (a1->name, b1->name) > 0 )
            return 0;
        else
            return 1;
    }
}


void bubble ( struct person * a, int n, int comp ( const void *, const void* ))
{    // container
    struct person swapp;
    bool swapped = false;
    for (int i =0; i<(n-1); i++)
    {
        for (int j=0; j<n-i-1; j++ )
        {
            if (comp(&a[i],&a[i+1])==1)
            {//swap names and ages

                strcpy(swapp.name, a[j].name);
                strcpy(a[j].name, a[j+1].name);
                strcpy(a[j+1].name, swapp.name);


                swapp.age = a[j].age;
                a[j].age = a[j+1].age;
                a[j+1].age = swapp.age;

                swapped = true;
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
// sorting according to names
    bubble (ppl,size,namescomp);

    for (int i=0; i<size; i++)
    {

        printf("{%s,%d}\n",ppl[i].name,ppl[i].age);
    }
    free(ppl);
    return 0;
}

