#include <stdio.h>

int main ()
{
    int n;

    scanf("%d", &n);

    if ( n % 2 == 0)
        printf("Your number is even\n");
    else
        printf("Your number is odd\n");

    return 0;
}
