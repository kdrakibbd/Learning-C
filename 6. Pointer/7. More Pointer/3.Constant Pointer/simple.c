#include <stdio.h>

int main()
{
    int i= 10, j;
    const int *ptr;

    ptr = &i;

    j = *ptr;
    *ptr = 20;

    printf("%d\n", *ptr);

    return 0;
}
//const int * ptr .....
//int * const ptr......
//const int * const ptr . .....
