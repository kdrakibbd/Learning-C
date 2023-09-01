#include <stdio.h>

int sumF(int n)
{
    if (n == 0) {
        return 0;
    }
    else {
        return n + sumF(n-1);
    }
}

int main ()
{
    int i, sum;

    printf("Enter yur number : ");
    scanf("%d", &i);

    sum = sumF(i);

    printf("Sum of n number is : %d\n", sum);

    return 0;
}
