#include <stdio.h>
#include <dos.h>

int main()
{
    char str[24] = "Abcdefghijk";
    int n;

    for (n = 0;str[n] != '\0';n++) {
        putchar(str[n]);
        delay(100);
    }

    return 0;
}
