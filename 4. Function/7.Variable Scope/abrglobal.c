#include <stdio.h>

int xy = 0;

void x(void)
{
    xy = 10;
    printf("\nIn x (), x = %d\n", xy);
}

int main ()
{
    printf("\nBefore calling x(), x = %d\n", ++xy);
    x();
    printf("\nAfter calling x(), x = %d\n", xy);

    return 0;
}
