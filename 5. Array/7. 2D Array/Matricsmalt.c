#include <stdio.h>

int main ()
{
	int a[2][2];// = {5, 6, 7, 8};
	int b[2][2]; //= {3, 4, 7, 1};
	int c[2][2], i, j, k, sum;

	for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            printf("a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
	}

	printf("Matrics A is : \n\t");
	for (i = 0;i < 2;i++) {
		for (j = 0;j < 2;j++) {
			printf("%d\t",a[i][j]);
		}
		printf("\n\t");
	}

    printf("\n");

    for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

	printf("\nMatrics B is : \n\t");
	for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n\t");
	}

	printf("\nMatrics A*B is : \n\t");
	for (i = 0;i < 2;i++) {
        for (j = 0;j < 2;j++) {
            sum = 0;
            for (k = 0;k < 2;k++)
                sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
            printf("%d\t",c[i][j]);
        }
        printf("\n\t");

	}

	return 0;
}
