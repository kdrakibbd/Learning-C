#include <stdio.h>

int main()
{
    int row = 0;
    int col = 0;
    int size = 0;
    int matrix[10][10];

    printf("Matrix size is : ");
    scanf("%d", &size);

    printf("\nMatrix ELement : \n");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            printf("      [%d][%d] : ", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nGiven matrix are : \n\t");
    for (row = 1;row < size + 1;row++) {
        for (col = 1;col < size + 1;col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n\t");
    }

    printf("Helically Travers is : ");

    row = 1;

    while (size > 0) {
        for (col = row;col < size + 1;col++) {
            printf("%4d", matrix[row][col]);
        }

        for (col = row + 1;col < size + 1;col++) {
            printf("%4d", matrix[size][col]);
        }

        for (col = size - 1;col > row - 1;col--) {
            printf("%4d", matrix[size][col]);
        }

        for (col = size - 1;col > row;col--){
            printf("%4d", matrix[col][row]);
        }

        row++;
        size--;
    }

    return 0;
}
