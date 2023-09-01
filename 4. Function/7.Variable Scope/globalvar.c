#include <stdio.h>

int x = 10;

void x1(void)
{
    printf("\nFrom x1(): x = %d\n", x);
    x = 15;
}

void x2(void)
{
    printf("From x2(): x = %d\n", x);
}

int main ()
{
    printf("\nFrom main (): x = %d\n", x);
    x1();
    x2();

    return 0;
}
