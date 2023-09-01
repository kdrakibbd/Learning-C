#include <stdio.h>
#define SIZE 2

int main ()
{
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];
	int c[SIZE][SIZE], i, j, k, sum;

	printf("Enter Matrix 1 : \n");
	for (i = 0;i < SIZE;i++) {
        for (j = 0;j < SIZE;j++) {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
	}

	printf("\n\nEnter Matrix 2 : \n");
	for (i = 0;i < SIZE;i++) {
        for (j = 0;j < SIZE;j++) {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
	}

	printf("\n\nMatrics a is : \n\t");
	for (i = 0;i < SIZE;i++) {
		for (j = 0;j < SIZE;j++) {
			printf("%d\t", a[i][j] );
		}
		printf("\n\t");
	}

	printf("\n\nMatrics b is : \n\t");
	for (i = 0;i < SIZE;i++) {
        for (j = 0;j < SIZE;j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n\t");
	}

	printf("\n\nMatrics multiplication is : \n\t");
	for (i = 0;i < SIZE;i++) {
        for (j = 0;j < SIZE;j++) {
            sum = 0;
            for (k = 0;k < SIZE;k++)
                sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
            printf("%d\t", c[i][j]);

        }
        printf("\n\t");
	}

	return 0;
}
