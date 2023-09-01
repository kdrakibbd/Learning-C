#include <stdio.h>

#define pi 3.1416

double area(double redius);

int main ()
{
    double sum, redius;

    printf("Entered Redius : ");
    scanf("%lf", &redius);

    sum = area(redius);

    printf("Area of circle is : %0.2lf", sum);

    return 0;
}

double area(double redius) {

    double sum2;

    sum2 = pi * redius * redius;

    return sum2;
}
