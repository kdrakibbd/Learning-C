#include <stdio.h>

int main ()
{
    int a, b, c;

    a = 10, b = 5, c = 15;

    printf("  --a  --b  --c\n");
    printf("......................\n");

//    while (--b, --c, --a) {
//        printf("%5d  %5d  %5d\n", a, b, c);
//    }

    while (--b, --c, --a);
        printf("%5d  %5d  %5d\n", a, b, c);
    return 0;
}
