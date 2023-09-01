#include <stdio.h>

int main()
{
    int i = 10, j;
    int * const ptr = &i;

    j = *ptr;
    *ptr = 20;
    ptr = &j;

    printf("%d\n", *ptr);

    return 0;
}
