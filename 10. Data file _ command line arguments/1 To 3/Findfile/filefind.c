#include <stdio.h>

int main ()
{
	FILE* fp;
	char filename[10];
	
	printf("Please type file name : ");
	gets(filename);
	
	if ((fp = fopen(filename, "r")) ==  NULL) {
		printf("File Not found\n");
	}	
	
	else {
		printf("%s File found\n", filename);
	}
	
	return 0;
}
