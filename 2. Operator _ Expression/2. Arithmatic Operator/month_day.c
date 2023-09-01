#include <stdio.h>

int main ()
{
    int month, days;

    printf("Enter your Number of day: ");
    scanf("%d", &days);

    month = days / 30;
    days = days % 30;

    printf("\nNumber of month = %d and days = %d\n",month, days);

    return 0;
}
