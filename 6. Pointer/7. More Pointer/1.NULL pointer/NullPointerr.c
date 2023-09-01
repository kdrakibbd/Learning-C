#include <stdio.h>

int main()
{
    int *ptr = NULL, x = 10;

    printf("%d\n", x);

    ptr = &x;

    printf("%d    %d\n", ptr, *ptr);

    return 0;
}
