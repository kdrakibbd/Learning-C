#include <stdio.h>

int main()
{
    int row = 0,
        col = 0,
        size = 0,
        sumAbove = 0,
        sumbelow = 0,
        matrix[5][5];

    printf("\nMatrix size : ");
    scanf("%d", &size);

    printf("\nEnter matrix element. . \n");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            printf("      Element[%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nThe Given matrix is : \n\t");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            printf("%d  ", matrix[row][col]);
        }
        printf("\n\t");
    }

    printf("\n\n");

    printf("Diagonal Matrics Are : ");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            if (row == col) {
                printf("%d  ", matrix[row][col]);
            }
        }
    }

    printf("\n\n");

    printf("Element Above the main diagoanl: ");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            if (row < col) {
                printf("%d  ", matrix[row][col]);
                sumAbove = sumAbove + matrix[row][col];
            }
        }
    }

    printf("\n\n");

    printf("ELement below the main diagoanl: ");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            if (row > col) {
                printf("%d  ", matrix[row][col]);
                sumbelow += matrix[row][col];
            }
        }
    }

    printf("\n\n");

    printf("Sum os element above the main diagonal: %d\n \
            Below the main diagonal: %d\n", sumAbove, sumbelow);

    return 0;
}
