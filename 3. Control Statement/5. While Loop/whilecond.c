#include <stdio.h>

int main ()
{
    int a = 5, b = 15, x = 10;

    while (--a, --b, --x)
        printf("%d  %d  %d\n", a , b, x);

    return 0;
}
