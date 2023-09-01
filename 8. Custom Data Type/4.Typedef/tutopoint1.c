#include <stdio.h>
#include <string.h>

typedef struct books
{
	char title[50];
	char author[30];
	char subject[100];
	int book_id;
}Booook;

int main ()
{
	Booook book;

	strcpy(book.title, "C Programming");
	strcpy(book.author, "Nuha Ali");
	strcpy(book.subject, "C Programming Tutorial");
	book.book_id = 1243455;
	
	printf("Title is    : %s\n", book.title);
	printf("Author is   : %s\n", book.author);
	printf("Subject is  : %s\n", book.subject);
	printf("Book ID is  : %d\n", book.book_id);

	return 0;
}
