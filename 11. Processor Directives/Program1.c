#include <stdio.h>
#define LINE 128
#define BOOK_NAME "My programming book"
#define Chapter "\nProcessor directives"

int main ()
{
	char _L[LINE];
	char _page[LINE];
	printf("Book name is : %s\n", BOOK_NAME);
	printf(Chapter);

	return 0;
}