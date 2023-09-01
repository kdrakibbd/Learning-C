#include <stdio.h>
#include <math.h>

int main ()
{
    double a, b;

    printf("Sin (): ");
    scanf("%lf", &a);

    b = sin(a);

    printf("Sin : %0.2lf\n", b);

    return 0;
}
