#include <stdio.h>

int main ()
{
    int num, i, sum;

    scanf("%d", &num);

    sum = 0;

    for (i = 1;i <= num;i++) {
        sum = sum + i;
    }

    printf("Sum is : %d\n", sum);

    return 0;
}
