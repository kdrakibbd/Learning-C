#include <stdio.h>

void add_value(int value1, int value2)
{
    int result = value1 + value2;

    printf("%d + %d = %d\n", value1, value2, result);
}

int main ()
{
    add_value(5,5);

    return 0;
}
