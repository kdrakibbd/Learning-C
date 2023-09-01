#include <stdio.h>

void print_msg(void)
{
	printf("\nSum of all the number from 1 to your given number: \n");
}

void added_all(long int val1)
{
	int n;
	long int sum;
	sum = 0;

	for (n = 0;n <= val1;n++) {
		sum += n;
	}
	printf("\n Sum of all number from 1 to %1d is %1d.", val1, sum);
}

int main ()
{
	print_msg();
	added_all(500);

	return 0;
}