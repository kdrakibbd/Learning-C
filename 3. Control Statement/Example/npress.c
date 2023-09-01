#include <stdio.h>

int main ()
{
    char ch;

    printf("Enter n: ");
    scanf("%c", &ch);

    if (ch == 'n') {
        printf("\n\n You pressed n");
    }

    return 0;
}
