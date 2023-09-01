#include <stdio.h>

int main ()
{
    int i, j;
    float f, g;

    i = 5, j = 7, f = 5.5, g = -3.25;

    //printf("%d\n", i+= 5);

    //printf("%f\n", f-=g);

    //printf("%d\n", j*=(i-3));

    //printf("%f\n", f /= 3);

    printf("%d\n", i%= (j - 2));

    return 0;
}
