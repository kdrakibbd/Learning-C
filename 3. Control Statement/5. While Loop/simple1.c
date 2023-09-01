#include <stdio.h>

int main ()
{
    char ch;

    scanf("%c", &ch);

//    if (ch != 'q')
//        printf("\n You did not press Q\n");
//
//    else
//        printf("You press Q");

    while (ch != 'q') {
        printf("\nYou did not pres Q\n");
    }

    printf("You press Q\n");

    return 0;
}
