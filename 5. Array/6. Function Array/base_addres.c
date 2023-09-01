#include <stdio.h>

void funcX(int get_array[])
{
	int n;

	printf("\nOrginal value of all element : ");
	for (n = 0;n < 5;n++) {
		printf("%5d", get_array[n] );
	}

	get_array[2] = 300;
}

int main ()
{
	int niton[5] = {10, 20, 30, 40, 50};

	printf("Before calling function  : \n\t niton[2] = %d\n", niton[2]);

	funcX(niton);

	printf("\n\nAfter calling function : \n\t Niton[2] = %d\n", niton[2]);

	return 0;
}
