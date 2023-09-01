#include <stdio.h>

int main ()
{
    int count;

    printf("First loop\n\a");
    for (count = 1;count <= 15;count++) {
        printf(" %d ", count);
    }

    printf("\nSecound Loop\n");
    for (count = 1;count <= 10;count++) {
        printf(" %d ", count);
    }

    printf("\n Third Loop\n");
    for (count = 100;count <= 5;count++) {
        printf(" %d ", count);
    }

    return 0;
}
