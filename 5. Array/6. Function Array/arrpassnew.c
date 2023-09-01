#include <stdio.h>

void func(int array[], int size)
{
	int n;

	for (n = 0;n < size;n++) {
		printf("%d  ", array[n]);
	}

	printf("\n");
}

int main ()
{
	int sumon[10] = {10,20,30,40,50,60,70,80,90,100};
	int rakib[10] = {10,20,30,40,50,60,70,80,90,100};
	int kd[10] = {10,20,30,40,50,60,70,80,90,100};

	printf("Value of sumon is : \n\t");
	func(sumon, 10);

	printf("Value of rakib is : \n\t");
	func(rakib, 10);

	printf("Value of kd is : \n\t");
	func(kd, 10);

	return 0;
}
