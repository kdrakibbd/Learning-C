#include <stdio.h>

int main ()
{
    printf("0 | 0     is : %d\n", 0|0);
    printf("0 | 1     is : %d\n", 0|1);
    printf("1 | 0     is : %d\n", 1|0);
    printf("1 | 2     is : %d\n", 1|1);
    printf("128 | 127 is : %d\n", 127|128);

    return 0;
}
