#include <stdio.h>

int main()
{
    int i;
    char ch, str[50];

    i = 0;

    printf("Type Few character : ");
    while (ch = getchar() != '\n') {
        str[i] = ch;
        i++;
    }

    str[i] = '\0';

    printf("You have typed : %s", str);

    return 0;
}
