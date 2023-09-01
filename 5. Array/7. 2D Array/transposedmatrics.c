#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3;j++) {
            printf("Matrics [%d][%d] :",i , j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrics is : \n\t");
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3;j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\t");
    }

    printf("\nThe Transposed Matrics is : \n\t");
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3;j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n\t");
    }

    return 0;
}
