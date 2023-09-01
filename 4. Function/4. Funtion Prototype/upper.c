#include <stdio.h>

char upper_case(char ch);

int main ()
{
    char lower, letter;

    printf("\nType a lower case letter: ");
    scanf("%c", &lower);

    letter = upper_case(lower);

    printf("\nThe upper case of your typing letter is : %c", letter);

    return 0;
}

char upper_case(char ch)
{
    char a;

    a = (ch - 'a') + 'A';

    return a;
}
