#include <stdio.h>

int main ()
{
	struct dmy
	{
		unsigned month : 4;
		unsigned day   : 5;
		unsigned year  : 7;
	} date;

	date.month = 1;
	date.day = 1;
	date.year = 2016;

	printf("My birth day is : %d-%d-%d\n", date.day, date.month, date.year);

	return 0;
}
