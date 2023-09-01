#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 1, y = 2;

    printf("Before Swap : x = %d    y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap : x = %d    y = %d\n", x, y);

    return 0;
}
