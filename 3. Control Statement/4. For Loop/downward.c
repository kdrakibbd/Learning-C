#include <stdio.h>

int main ()
{
    int count;

    printf("\n First loop: ");
    for (count = 5;count >= 1;count--) {
        printf(" %d ", count);
    }

    printf("\nSecound loop: ");
    for (count = 10;count >= 1;count--) {
        printf(" %d ", count);
    }

    printf("\nThird loop: ");
    for (count = 1;count >= 10;count--) {
        printf(" %d ", count);
    }

    return 0;
}
