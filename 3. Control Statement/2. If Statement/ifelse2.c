#include <stdio.h>

int main ()
{
    int n, i;

    scanf("%d %d", &n, &i);

    if (n < i)
        printf("n is smaller than i\n");
    else
        printf("n is bigger than i\n");

    return 0;
}
