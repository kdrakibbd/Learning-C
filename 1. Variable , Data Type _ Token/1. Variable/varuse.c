#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;

	printf("\nEnter your first value: ");
	scanf("%d", &a);

	printf("\nEnter your secound value: ");
	scanf("%d", &b);

	c = a * b;

	printf("\n%d * %d = %d\n", a, b, c);

	return 0;
}
