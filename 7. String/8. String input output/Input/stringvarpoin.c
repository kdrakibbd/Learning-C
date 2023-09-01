#include <stdio.h>

int main ()
{
    char *p;

    printf("Enter some text : ");
    gets(p);

    printf("You have typed : %s", p);

    return 0;
}
