#include <stdio.h>

int ret_befo(int val1)
{
	printf("\nStatment is ret befo() funcion before return." );
	return (val1*val1);

	printf("\nStatment is ret befo() funcion after return." );
}

int main ()
{
	int val1, get;

	printf("\nEnter a value : ");
	scanf("%d", &val1);

	//get = ret_befo(val1);

	printf("\n\nSquare of %d is %d\n", val1, ret_befo(val1));

	return 0;
}
