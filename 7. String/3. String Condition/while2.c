#include <stdio.h>

int main()
{
    char* str = "niton";

    while (*str != '\0')
        putchar(*str++);

    return 0;
}
