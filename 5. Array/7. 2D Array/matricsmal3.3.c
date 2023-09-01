#include <stdio.h>

int main ()
{
	int a[3][3];
	int b[3][3];
	int c[3][3], i, j, m, sum;

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n\nMatrics a is : \n\t");
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n\t");
	}

	printf("\n");

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			printf("b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	printf("\n\nMatrics b is : \n\t");
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n\t");
	}

	printf("\n");

	printf("\n\nMatrics a*b is : \n\t");
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++) {
			sum = 0;
			for (m = 0;m < 3;m++)
				sum = sum + a[i][m] * b[m][j];
			c[i][j] = sum;
			printf("%d\t", c[i][j]);
		}
		printf("\n\t");
	}

	return 0;
}
