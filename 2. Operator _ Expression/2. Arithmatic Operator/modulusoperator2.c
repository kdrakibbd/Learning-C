#include <stdio.h>

int main()
{
    int x = 25, y = 7;

    printf("x mod y = %d\n", (x % y));
    printf("x mod -y = %d\n", (x %(-y)));
    printf("-x % y = %d\n", (-x) % y);
    printf("-x % -y = %d\n", (-x) % (-y));

    return 0;
}
