#include <stdio.h>

int main ()
{
    int xyz;

    printf("\n\aEnte your number: ");
    scanf("%d", &xyz);

    switch (xyz) {
    case 1:
        printf("\nHave a good morning\n");
        break;

    case 2:
        printf("\nHave a Nice day\n");
        break;

    case 3: case 4: case 5:
        printf("\nHave a nice evening\n");
        break;

    default:
        printf("No wish fo r U\n");
    }

    return 0;
}
