#include <stdio.h>

int main ()
{
    int n, sum, range;

    printf("\nHow many numbers do you want to calculate: ");
    scanf("%d", &range);

    sum = 0;

    for (n = 1;n <= range;n++) {
        sum += n;
    }

    printf("Sum of all numbers from 1 to %d is %d.\n",range, sum);

    return 0;
}
