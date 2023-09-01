#include <stdio.h>

int main ()
{
	int row = 0;
	int col = 0;
	int size = 0;
	int matrix[10][10];

	printf("\nMatrix size : ");
	scanf("%d", &size);

	printf("\nMatrix Element is :\n");
	for (row = 1;row < size + 1;row++) {
		for (col = 1;col < size + 1;col++) {
			printf("      [%d][%d] : ", row, col);
			scanf("%d", &matrix[row][col]);
		}
		printf("\n");
	}

	printf("\n");

	printf("\nGiven matrix are : \n\t");
	for (row = 1;row < size + 1;row++) {
		for (col = 1;col < size + 1;col++) {
			printf("%d\t", matrix[row][col]);
		}
		printf("\n\t");
	}

	printf("\nHelicaly Travers are: ");

	row = 1;

	while (size > 0) {
		for (col = row;col < size + 1;col++) {
			printf("%4d", matrix[row][col]);
		}

		for (col = row + 1;col < size + 1;col++) {
            printf("%4d", matrix[col][size]);
		}

		for (col = size - 1;col > row - 1;col--) {
            printf("%4d", matrix[size][col]);
		}

		for (col = size - 1;col > row;col--) {
            printf("%4d", matrix[size][row]);
		}

		row++;
		size--;
	}

	printf("\n\n");

	return 0;
}
