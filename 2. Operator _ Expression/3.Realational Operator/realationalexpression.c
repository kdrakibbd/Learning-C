#include <stdio.h>

int main ()
{
    int a, b, c;
    a = 3;
    b = 7;
    c = 5;

    int z = a<b<c;

    printf("Z = %d\n", z);

    return 0;
}
