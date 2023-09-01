#include <stdio.h>

void P(int n)
{
    if (1 > n)
        return;
    P(n-1);
    printf("%d\n",n);
}

int main ()
{
    int i = 5;

    P(i);

    return 0;
}
