#include <stdio.h>

int main ()
{
	FILE* new_file;
	
	new_file = fopen("test.txt", "r");
	
	if (new_file == NULL) {
		printf("Error : file does not exit\n");
	}
	
	else {
		printf("File succesfully opened\n");
	}
	
	return 0;
}
