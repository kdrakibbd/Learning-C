#include <stdio.h>
#include <string.h>

int main ()
{
    char name[100];

    printf("Enter your string : ");
    gets(name);

    strrev(name);

    printf("\nRevers : %s\n", name);

    return 0;
}
