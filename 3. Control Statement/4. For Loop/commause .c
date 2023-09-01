#include <stdio.h>

int main ()
{
    int a, b;

    for (a = 1, b = 100;a <= 100;a++, b--) {
        printf("%6d  %6d\n", a, b);
    }

    return 0;
}
