#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[30];
    char str2[30];

    gets(str1);

    strcpy(str2, str1);

    printf("%s\n", str2);

    return 0;
}
