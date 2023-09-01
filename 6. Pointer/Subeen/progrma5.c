#include <stdio.h>

int main ()
{
    int x = 10;
    int *p;

    printf("Value of x : %d\n", x);

    p = &x;
    *p = 20;

    printf("Value of x is : %d\n", x);

    x = 15;

    printf("Value of x is : %d\n", x);
    printf("Value stored at loacation %p is %d\n", p, *p);

    printf("Address of x is : %p\n", &x);
    printf("value of p: %p\n", p);

    return 0;
}
