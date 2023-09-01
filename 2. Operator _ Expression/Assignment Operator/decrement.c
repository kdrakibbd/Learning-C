#include <stdio.h>

int main()
{
    int count;

    count = 1;

    printf("Using postfix value = %d\n", count--);
    printf("count is : %d\n", count);

    count = 1;
    printf("Using prifix value = %d\n", --count);
    printf("count is : %d\n", count);

    return 0;
}
