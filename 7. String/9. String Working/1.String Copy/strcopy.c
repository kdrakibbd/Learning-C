#include <stdio.h>
#include <string.h>

int main ()
{
	char name_1[30] = "Sumon";
	char name_2[30];

	strcpy(name_2, name_1);

	printf("%s\n", name_2);

	return 0;
}
