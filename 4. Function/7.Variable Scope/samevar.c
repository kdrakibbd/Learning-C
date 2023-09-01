#include <stdio.h>

void locale_1(void);
void local_2(void);

int main ()
{
    int niton = 3;

    local_1();
    local_2();

    printf("\nNiton within main : %d", niton);

    return 0;
}

void local_1(void)
{
    int niton = 1;
    printf("\n Niton within local_1 : %d", niton);
}

void local_2(void)
{
    int niton = 2;
    printf("\n Niton within local_1 : %d", niton);
}
