#include <stdio.h>

int main ()
{
    int i = 10, a = 5, b = 2;
    int z = i > a + b < i;
    int y = (i > a) + (b < i);

    printf("z = %d\n", z);
    printf("y = %d\n", y);

    return 0;
}
