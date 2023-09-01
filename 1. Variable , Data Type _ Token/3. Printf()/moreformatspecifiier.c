#include <stdio.h>

int main ()
{
    int a = 5, b = 55, c = 555;

    printf("%6d %6d %6d\n", a, b, c);
    printf("%6d %6d %6d\n", c, b, a);

    printf("\n");

    printf("%-6d %-6d %-6d\n", a, b, c);
    printf("%-6d %-6d %-6d\n", c, b, a);

    return 0;
}
