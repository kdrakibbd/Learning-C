#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40 ,50};

    printf("Sizeof a[] = %d\n", sizeof(a));
    printf("         a = %x\n", a);
    printf("        &a = %x\n", &a[0]);

    return 0;
}
