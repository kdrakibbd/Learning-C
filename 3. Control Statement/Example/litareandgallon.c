#include <stdio.h>

int main ()
{
    int i, n = 10;
    double sum;

    printf("Gallon = Litare.\n");

    for (i = 1;i <= 10;i++) {
        sum = i * 3.785;
        printf("%d   %0.2lf\n", i, sum);
        sum = 0;
    }

    return 0;
}
