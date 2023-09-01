#include <stdio.h>

int main ()
{
    int grade1, grade2, grade3, grade4, grade5;
    float avr;

    printf("Enter your 5 value: ");
    scanf("%d  %d  %d  %d  %d", &grade1, &grade2, &grade3, &grade4, &grade5);

    avr = (float)((grade1 + grade2 + grade3 + grade4 + grade5) / 5.0);

    printf("\n\n\nAvarage is : %0.2lf\n", avr);

    return 0;
}
