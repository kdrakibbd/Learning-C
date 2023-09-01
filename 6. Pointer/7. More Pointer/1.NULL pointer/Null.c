#include <stdio.h>

int main ()
{
    int *ptr = NULL, x = 16;

    printf("%x    %d\n", ptr, *ptr);

    ptr = &x;

    printf("%x    %d\n", ptr, *ptr);

    return 0;
}
