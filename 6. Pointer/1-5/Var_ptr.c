#include <stdio.h>

int main()
{
    int x, *y;
    x = 1;
    y = &x;

    printf("Value of y is : %x\n", y);
    printf("Value of x is : %d\n", x);
    printf("value of x is : %x\n", &x);

    printf("\n");

    int a, b, *c, *d;
    a = 10;
    b = 19;

    c = &a;
    d = &b;

    printf("Value of a is %x \n", c);
    printf("Value of a is %x\n", &a);
    printf("Value of b is : %x\n", d);
    printf("value of b is : %x\n", &b);

    return 0;
}
