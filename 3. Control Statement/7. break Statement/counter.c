#include <stdio.h>

int main()
{
    int counter;

    printf("First Loop:\n");

    for (counter = 1;counter <= 100;counter++) {
        if (counter == 51)
            break;

        printf("%d ", counter);
    }

    printf("\n\n\n");

    printf("Secound Loop: \n");

    for (counter = 100;counter >= 1;counter--) {
        if (counter == 49) {
            break;
        }

        printf("%d ", counter);
    }

    return 0;
}
