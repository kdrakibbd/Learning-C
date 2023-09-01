#include <stdio.h>

int main ()
{
	struct partsinfo
	{
		char p_name[24];
		char p_no[10];
		char cmpny[30];
		float price;
	};

	int n;

	struct partsinfo filter[5] =
	{
		{"Air filter   ", "AF2890   ", "CAT", 1800.00},
		{"Fuel filter  ", "FF180A   ", "CAT", 950.00},
		{"Hyd filter   ", "100000   ", "CAT", 1250.00},
		{"Hyd Pipe     ", "454552   ", "MA", 1212.00},
		{"Oil filter   ", "FH34LF   ", "FLE", 1222.00}
	};

	printf("NAME     ID     VENDER    PRICE\n");
	printf(".....................................\n");

	for (n = 0;n < 5;n++) {
		printf("%s    %s    %s    %0.2f\n",filter[n].p_name, filter[n].p_no, filter[n].cmpny, filter[n].price );
	}

	return 0;
}
