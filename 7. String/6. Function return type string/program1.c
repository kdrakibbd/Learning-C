#include <stdio.h>
#include <string.h>

char* func(char* str)
{
    strcopy(str, "sumon is a good boy");

    return str;
}

int main ()
{
    char str[32];
    char* ptr;

    ptr = func(str);

    printf("The return string is : %s\n", ptr);

    return 0;
}
