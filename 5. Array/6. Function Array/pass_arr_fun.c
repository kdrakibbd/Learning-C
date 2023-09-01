#include <stdio.h>

void funcX(float array[], int size)
{
	int n;

	for (n = 0;n < size;n++) {
		printf("%.2f ",array[n]);
	}

	printf("\n");
}

int main()
{
	float showkat[5] = {10.0,20.0,30.0,40.0,50.0};
	float ratna[4] = {1.0, 100.0, 1000.0, 10000.0};
	float nipu[3] = {-5.5, -6.6, -7.7};

	printf("Value of showkat array: \n\t");
	funcX(showkat,5);

	printf("Value of ratna aaray: \n\t");
	funcX(ratna,4);

	printf("Value of nipu array: \n\t");
	funcX(nipu,3);

	return 0;
}
