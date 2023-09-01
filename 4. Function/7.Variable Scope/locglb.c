#include <stdio.h>

int x = 10;

void X(void)
{
    int x = 20;

    printf("\nIn X(), outside block statement : x = %d", x);
    {
        int x = 100;
        printf("\nIn x(), inside block statement : x = %d", x);
    }
}

int main()
{
    X();
    printf("\n\n\n In main (_), x = %d\n", x);

    return 0;
}
