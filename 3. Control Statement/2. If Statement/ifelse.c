#include <stdio.h>

int main ()
{
    char ch;

    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("%c is lower case\n", ch);
    else
        printf("%c is other case\n", ch);

    return 0;
}
