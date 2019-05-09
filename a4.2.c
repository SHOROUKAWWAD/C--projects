/*JTSK-320112
a4p4.c
SHOROUK GABR AWWAD
s.awwad@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// uppercase only
void uppercase (char*  string)
{
    for (int i=0; i<strlen(string); i++)
    {
        printf("%c",toupper(string[i]));
    }
}



// lower case only
void lower (char* string )
{
    for (int i=0; i<strlen(string); i++)
    {
        printf("%c",tolower(string[i]));
    }
}
// reverse the condition
void opposite (char* string)
{
    for (int i=0; i<strlen(string); i++)
    {
        if (islower(string[i]))
        {
            printf("%c",toupper(string[i]));
        }
        else
        {

            printf ("%c",tolower(string[i]));
        }
    }
}
void end (char* A)
{
    exit(0);
}

int main()
{

    char s [1000];


    char c;
    int i;
    fgets(s, sizeof(s), stdin);

// pointers to  functions
    void (*func_array[4])(char*) = {uppercase, lower, opposite, end};
    while(1)
    {
        scanf("%c", &c);
        getchar();
        i = atoi(&c);
        func_array[i-1](s);
    }

    return 0;



}

