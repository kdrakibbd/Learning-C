#include <stdio.h>

int main()
{
    int *ptr, x = 16;

    printf("%x    %02X\n", ptr, *ptr);

    ptr = &x;

    printf("%x    %d\n", ptr, *ptr);

    return 0;
}
