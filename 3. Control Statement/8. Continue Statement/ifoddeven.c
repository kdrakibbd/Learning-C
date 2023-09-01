#include <stdio.h>

int main()
{
    int counter;

    printf("Even number: \n");
    for (counter = 1;counter <= 100;counter++) {
        if(!(counter % 2))
            printf("%d  ", counter);
    }

    printf("\n\nOdd number: ");
    counter = 0;

    while (counter < 100) {
        counter++;
        if (counter %2) {
            printf("%d  ", counter);
        }
    }

    return 0;
}
