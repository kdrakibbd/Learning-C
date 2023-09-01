#include <stdio.h>
#include <conio.h>

int factarial(int n)
{
    if (n == 0)
        return 1;
    else
        return n*factarial(n-1);
}

int main ()
{
    int i, fact;

    printf("Enter your number : ");
    scanf("%d", &i);

    fact = factarial(i);

    printf("The factarial is : %d\n", fact);

    return 0;
}
