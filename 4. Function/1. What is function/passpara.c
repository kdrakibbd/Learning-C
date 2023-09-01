#include <stdio.h>

void sum_of_all(int niton)
{
    long int n, sum;

    sum = 0;

    for (n = 0;n <= niton;n++) {
        sum += n;
    }

    printf("\nSum of all number from 1 to %d is %d\n", niton, sum);
}

int main ()
{
    sum_of_all(100);

    return 0;
}
