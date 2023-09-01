#include <stdio.h>

int main ()
{
    int a, b, c;

    printf("\nEnter first value: ");
    scanf("%d", &a);

    printf("\nEnter secound value: ");
    scanf("%d", &b);

    c = a + b;

    printf("\nAddition is %d and %d is %d\n", a, b, c);

    return 0;
}
