#include <stdio.h>

int main ()
{
    int x = 10;
    int y;
    int *p;

    printf("Value of x is : %d\n", x);

    p = &x;
    y = *p;
    *p = 15;

    printf("value of x is : %d\n", x);
    printf("value of y is : %d\n", y);
    printf("value of *p   : %d\n", *p);
    printf("Address of x  : %p\n", &x);
    printf("Addres of y   : %p\n", &y);
    printf("value of p : %p\n", p);

    return 0;
}
