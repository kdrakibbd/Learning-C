#include <stdio.h>

int main()
{
    char* str = "niton";
    char ch;

    for (ch = *str;(ch = *str) != '\0';*str++)
        putchar(ch);

    return 0;
}
