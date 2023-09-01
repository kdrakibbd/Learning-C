#include <stdio.h>

int main ()
{
    int x = 10, y;
    int *p, *q;

    p = &x; // address of x in p
    y = *p; // y = 10
    *p = 15; // x & *p = 15
    q = &y; // addrss of y in q
    *q = 20;

    printf("Value of X : %d\n", x);
    printf("value of y : %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);

    return 0;
}
