#include <stdio.h>

int main ()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {1, 2, 3, 4};
    int c[2][2], i, j;

    printf("Matrics a is : \n\t");
    for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\t");
    }

    printf("\n");

    printf("Matrics b is : \n\t");
    for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n\t");
    }

    printf("\n");

    printf("Matrics a + b is :\n\t");
    for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            printf("%d\t", a[i][j]+b[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}
