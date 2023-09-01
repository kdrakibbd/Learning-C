#include <stdio.h>

int main ()
{
    char name[100], name1[100];

    printf("Enter string to duplicate :");
    gets(name);

    if ((name1 = strdup(name)))
        printf("\nDuplicate string is : %s", name1);
    else
        printf("\nSorry : there is na error acces");

    return 0;
}
