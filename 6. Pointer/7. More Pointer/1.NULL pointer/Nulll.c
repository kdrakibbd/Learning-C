#include <stdio.h>

int main()
{
    int *ptr , x = 16;

    printf("%d    %d\n", ptr, *ptr);

    ptr = &x;

    printf("%d    %d\n", ptr, *ptr);

    return 0;
}
