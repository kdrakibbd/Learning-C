#include <stdio.h>

int add_function(int n)
{
    int i, sum = 0;

    for (i = 1;i <= n;i++) {
        sum += i;
    }

    return sum;
}

int main ()
{
    int n, sum;

    printf("Enter your number : ");
    scanf("%d", &n);

    sum = add_function(n);

    printf("Sum is : %d\n", sum);

    return 0;
}
