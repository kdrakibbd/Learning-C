#include <stdio.h>

int main ()
{
    int old;

    printf("Enter your old: ");
    scanf("%d", &old);

    if (old < 18) {
        printf("\nYou can't vote\n");
    }

    else {
        printf("\nYou can vote\n");
    }

    return 0;
}
