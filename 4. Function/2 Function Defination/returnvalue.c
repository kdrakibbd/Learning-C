#include <stdio.h>

long int square_value(long int any_valus)
{
    long int result;

    result = any_valus * any_valus;

    return result;
}

int main ()
{
    long int x, a = 100;

    x = square_value(a);

    printf("The square value is %d is %d\n", a, x);

    return 0;
}
