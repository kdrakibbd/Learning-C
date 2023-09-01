#include <stdio.h>

int func(char* string)
{
    int n = 0;

    while (*string++ != '\0') {
        n++;
    }

    return n;

}

int main ()
{
    char* str = "My name is sumon";
    int len;

    len = func(str);

    printf("str length is : %d\n", len);

    return 0;
}
