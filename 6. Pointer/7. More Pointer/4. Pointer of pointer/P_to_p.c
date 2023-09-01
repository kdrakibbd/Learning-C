#include <stdio.h>

int main ()
{
    int i = 10;

    int *ptr0 = &i;
    int **ptr1 = &ptr0;
    int ***ptr2 = &ptr1;

    printf("&ptr2 = %x   ptr2 = %x   *ptr2 = %x\n", &ptr2, ptr2, *ptr2);
    printf("&ptr1 = %x   ptr1 = %x   *ptr1 = %x\n", &ptr1, ptr1, *ptr1);
    printf("&ptr0 = %x   ptr0 = %x   *ptr0 = %x\n", &ptr0, ptr0, *ptr0);
    printf("        &i = %x    i = %x\n", &i, i);

    printf("\n\n*ptr0 = %x  **ptr1 = %x   ***ptr2 = %x\n", *ptr0, **ptr1, ***ptr2);

    return 0;
}
