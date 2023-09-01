#include <stdio.h>

int func_ele(int val_1, int val2);

int main ()
{
    int x, romi[5] = {10, 20, 30, 40, 50};

	x = func_ele(romi[3], romi[4]);

	printf("Sum is : %d\n",x);

	return 0;
}

int func_ele(int val_1, int val2)
{
	int y;

	y = val_1 + val2;

	return y;
}
