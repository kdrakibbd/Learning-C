#include <stdio.h>

void swap_val(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


}

int main()
{
    int x = 1, y = 2;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_val(&x, &y);

    printf("After swap : x = %d, y = %d\n", x, y);

    return 0;
}
