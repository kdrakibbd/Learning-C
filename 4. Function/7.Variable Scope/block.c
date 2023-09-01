#include <stdio.h>

int main ()
{
    int niton = 10;

    printf("Out side the block niton = %d\n", niton);

    if (niton <= 10) {
        int niton = 20;
        printf("Inside the block niton = %d\n", niton);
    }

    printf("At the end niton is : %d\n", niton);

    return 0;
}
