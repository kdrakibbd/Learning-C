#include <stdio.h>

int main ()
{
    int a[] = {1,2,3};

    printf("Size of a[] = %d\n", sizeof(a));
    printf("         a  = %x\n", a);
    printf("      &a[0] = %x\n", &a[0]);

    return 0;
}
