#include <stdio.h>

char lower(char);

int main ()
{
    char upper, letter;

    printf("Enter your upper letter: ");
    scanf("%c", &upper);



    letter = lower(upper);

    printf("Lower case is : %c", letter);

    return 0;
}

char lower(char ch)
{
    char a;

    return a = ch - 'A' + 'a';

}
