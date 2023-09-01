#include <stdio.h>
#include <string.h>

int main ()
{
    char mainstring[100];
    char *substring[100];
    char *pos; // ekhane problem

    printf("Enter a string : ");
    gets(mainstring);

    printf("Enter a word that will search in the above string :");
    gets(substring);

    pos = strstr(mainstring, substring); // ekhane prolem

    if (pos)
        printf("\n\n%s found at position %d.\n\n", substring, pos);
    else
        printf("\n\nNot found sub string\n\n");

    return 0;
}
