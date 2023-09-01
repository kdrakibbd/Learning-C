#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[30], str2[40];
    int x;

    printf("Enter first string : ");
    gets(str1);

    printf("Enter secound string:");
    gets(str2);

    x = strcmp(str1, str2);

    if (0 != x)
        printf("\n\nTwo string's are not equal.");
    else
        printf("\n\nTwo string's are Equal\n\n");

    return 0;
}
