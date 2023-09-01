#include <stdio.h>

int main ()
{
	FILE* fp;
	char f_name[10];
	
	printf("Please type a file name : ");
	gets(f_name);
	
	if ((fp = fopen(f_name, "r")) == NULL) {
		printf("Sorry , File no fuond\n");
	}
	
	else {
		printf("%s  file found", f_name );
	}
	
	return 0;
}
