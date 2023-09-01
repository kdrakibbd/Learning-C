#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];

    printf("Enter your string : ");
    gets(ch);

    strlwr(ch);

    printf("\n\nLower case is : %s\n\n", ch);

    return 0;
}
