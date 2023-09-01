#include <stdio.h>

int main ()
{
    float a, b, c;

    printf("\n\n\a Enter there values (separated by space) : ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\n\a The largest value is : ");

    if (a > b) {
        if (a > c) {
            printf("%0.2f", a);
        }
        else {
            printf("%0.2f", c);
        }
    }

    else {
        if (c > b) {
            printf("%0.2f", c);
        }
        else {
            printf("%0.2f", b);
        }
    }

    return 0;
}
