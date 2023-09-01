#include <stdio.h>

int main ()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0) {
        printf("%d is LEAP YEAR\n", year);
    }
    else {
        printf("%d is Not LEAP YEAR\n", year);
    }

    return 0;
}
