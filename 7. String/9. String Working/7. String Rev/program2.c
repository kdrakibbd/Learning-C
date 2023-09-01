#include <stdio.h>
#include <string.h>

void strreve(char s[])
{
    int i = 0, j;
    int length;
    length = strlen(s);

    for (i = 0, j = length;s[i] != '\0';i++, j--){
        s[j] = s[i];
    }
    s[j] = '\0';

}

int main ()
{
    char name[100];

    printf("Enter your string : ");
    gets(name);

    strreve(name);

    printf("String rev : %s\n", name);

    return 0;
}
