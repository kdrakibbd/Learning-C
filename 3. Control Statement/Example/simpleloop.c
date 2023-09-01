#include <stdio.h>

int main ()
{
    int i;
    int j;

    for (i = 1, j = 1;i <= 2, j <= 15;i++, j++) {
        printf("%d  %d\n", i, j);
    }

    return 0;
}
