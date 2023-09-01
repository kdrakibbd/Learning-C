#include <stdio.h>

int main ()
{
    int row = 0;
    int col = 0;
    int size = 0;
    int sumdia = 0;
    int sumabove = 0;
    int sumbelow = 0;
    int matrix[5][5];

    printf("The Matrix size : ");
    scanf("%d", &size);

    printf("\nEnter Matrix element: \n");
    for (row = 0;row < size;row++) {
        for (col = 0;col < size;col++) {
            printf("      Element [%d][%d] : ", row + 1, col + 1);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("The Given matrix is : \n\t\t");
    for (row = 0;row < size;row++) {
        for (col = 0;col < size;col++) {
            printf("%d  ", matrix[row][col]);
        }
        printf("\n\t\t");
    }

    printf("\n\n");

    printf("Diagonal Matrix is : ");
    for (row = 0;row < size;row++) {
        for (col = 0;col < size;col++) {
            if (row == col) {
                printf("%d  ", matrix[row][col]);
                sumdia += matrix[row][col];
            }
        }
    }

    printf("\n\n");

    printf("Diagonal matrix sum : %d\n\n", sumdia);

    printf("Element above the main diagonal : ");
    for (row = 0;row < size;row++) {
        for (col = 0;col < size;col++) {
            if (row < col) {
                printf("%d ", matrix[row][col]);
                sumabove += matrix[row][col];
            }
        }
    }

    printf("\n\n");

    printf("sum of above the main diagoal : %d\n\n", sumabove);

    printf("Element below the main diagoanl : ");
    for (row = 0;row < size;row++) {
        for (col = 0;col < size;col++) {
            if (row > col) {
                printf("%d ", matrix[row][col]);
                sumbelow += matrix[row][col];
            }
        }
    }

    printf("\n\n");

    printf("Element below the main diagonal sum : %d\n\n", sumbelow);

    return 0;
}
