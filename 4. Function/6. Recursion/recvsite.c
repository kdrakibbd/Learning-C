#include <stdio.h>

long int find_fact(int x)
{
    int i, sum = 1;

    for (i = 1;i <= x;i++) {
        sum *= i;
    }

    return sum;
}

int main ()
{
    long int value;

    value = find_fact(5);

    printf("Factarial of 5 is %d\n", value);

    return 0;
}
