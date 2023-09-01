#include <stdio.h>

void printint(int k)
{
    if (k == 0) {
        return 0;
    }
    printf("%d\n", k);
    printint(k - 1);
}

int main ()
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    printint(i);

    return 0;
}
