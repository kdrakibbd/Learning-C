#include <stdio.h>

int main ()
{
    int grade[10], i, sum = 0;
    double avr;

    for (i = 0;i < 10;i++) {
        printf("\nEnter grade [%d]", i+1);
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    avr = sum / 10.0;

    printf("\nAvarage is : %0.2lf\n", avr);

    return 0;
}
