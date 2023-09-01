#include <stdio.h>
#include <math.h>

int main ()
{
    float n;

    while (1) {
        scanf("%f", &n);
        if (n <= 0.0) {
            break;
        }
        printf("%0.2f\n\n", sqrt(n));
    }

    return 0;
}
