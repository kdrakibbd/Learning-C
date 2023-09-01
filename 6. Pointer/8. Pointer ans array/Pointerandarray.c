#include <stdio.h>

int main ()
{
    int n, x[5] = {1,2,3,4,5};
    int *p;
    p = x;

    for (n = 0;n < 5;n++) {
        printf("%d is %d\n", n+1, *(p+n));
    }

    return 0;
}
