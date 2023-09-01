#include <stdio.h>
void P(int n)
{
    if(1 > n)
        return;
    //P(n-1);
    printf("%d\n",n);
    P(n-1);
}


int main ()
{
    int i = 111;

    P(i);

    return 0;
}
