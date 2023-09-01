#include <stdio.h>

int main ()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;

    printf("Value fo x : %d\n", x);
    printf("value of y : %d\n", y);
    printf("value of *p : %d\n", *p);
    printf("value of *p : %d\n", *q);

    return 0;
}
