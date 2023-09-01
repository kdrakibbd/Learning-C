#include <stdio.h>

void square_num(void)
{
    int i, num;

    printf("\n\nNUMBER     SQUARE\n");
    for (num = 1;num <= 10;num++) {
        printf("%d           %d\n", num, num*num);
    }
}

void cube_num(void)
{
    int i, num;

    printf("\n\nNUMBER     CUBIC\n");
    for (num = 1;num <= 10;num++) {
        printf("%d            %d\n", num, num*num*num);
    }
}

int main ()
{
    printf("\n\nPress any key to see square number from 1 to 10. ");

    getch();

    square_num();

    printf("\n\nPress any key to see cubic number from 1 to 10.");

    getch();

    cube_num();

    return 0;
}
