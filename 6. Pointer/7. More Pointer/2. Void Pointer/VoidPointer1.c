#include <stdio.h>

int main ()
{
    int x = 10, z;
    double y = 3.1416;
    void *ptr;

    ptr = &x;

    z = *(int*)ptr;

    printf("Ptr is : %x and *ptr is : %d\n", ptr,z);

    return 0;
}
