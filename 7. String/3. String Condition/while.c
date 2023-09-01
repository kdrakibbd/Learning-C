#include <stdio.h>

int main ()
{
    char* str = "sumon hasan";

    while (*str != '\0') {
        putch(*str++);
    }

    return 0;
}
