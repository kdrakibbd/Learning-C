#include <stdio.h>

int main ()
{
    int counter;

    printf("Even Number: ");
    for (counter = 1;counter <= 50;counter++) {
        if (counter % 2) {
            continue;
        }

        printf("%d  ", counter);
    }

    printf("\n\nOdd Number: ");

    counter = 0;

    while (counter < 50) {
        counter++;
        if (!(counter % 2)) {
            continue;
        }
        printf("%d ", counter);

    }

    printf("\n");

    return 0;
}
