#include <stdio.h>

int abs_val(int val1) {

	return -val1;
	return (val1);
}

int main ()
{
	int val1, get;

	printf("Enter a valus : ");
	scanf("%d", &val1);

	get = abs_val(val1);

	printf("\nAbsulate value of %d is %d", val1, get);

	return 0;
}
