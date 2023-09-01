#include <stdio.h>

int main()
{
    int x = 78;;
    void *ptr;

    ptr = &x;

    printf("ptr = %d    *ptr = %d\n", ptr, *(int*)ptr);

    return 0;
}
