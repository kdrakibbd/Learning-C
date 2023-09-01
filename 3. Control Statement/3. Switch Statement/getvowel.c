#include <stdio.h>

int main ()
{
	char ch;

	printf("Enter your character : ");
	scanf("%c", &ch);

	switch (ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel\n", ch);
			break;

		default:
			printf("%c is a Consonent\n",ch);
	}

	return 0;
}
