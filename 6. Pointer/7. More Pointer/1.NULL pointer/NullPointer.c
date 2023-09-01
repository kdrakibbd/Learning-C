#include <stdio.h>
#define NULL 0

int main ()
{
    int *ptr = NULL, x = 10;

    printf("%x    %d\n", ptr, *ptr);

    ptr = &x;

    printf("%x    %d\n", ptr, *ptr);

    return 0;
}
