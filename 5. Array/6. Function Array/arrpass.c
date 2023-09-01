#include <stdio.h>

void funntion(int sumon[]);

int main ()
{
	int sumon[5] =  {10,20,30,40,50};

	funntion(sumon);

	return 0;
}

void funntion(int sumon[])
{
	int i;

	for (i = 0;i < 5;i++) {
		printf("%d\n", sumon[i]);
	}
}
