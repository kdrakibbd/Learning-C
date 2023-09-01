#include <stdio.h>

void call_by_val(int a, int b)
{
    a += 1;
    b += 1;
}

int main ()
{
    int a = 5, b = 10;

    call_by_val(a,b);

    printf("a = %d, b = %d\n", a,b);

    return 0;
}
