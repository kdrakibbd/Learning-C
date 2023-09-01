#include <stdio.h>

int main ()
{
    double pi = 3.1416;

    int *ptr;

    ptr = &pi;

    printf("Value of pi is : %lf\n", pi);
    printf("Value of ptr is : %lf\n", *ptr);

    return 0;
}
