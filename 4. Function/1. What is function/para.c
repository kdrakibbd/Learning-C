#include <stdio.h>

void sum_of_all(void)
{
    int i, sum = 0;

    for (i = 1;i <= 100;i++) {
        sum += i;
    }

    printf("\n Sum of all numbers fom 1 to 100 is %d\n", sum);
}

int main ()
{
    sum_of_all();

    return 0;
}
