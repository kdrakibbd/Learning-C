#include <stdio.h>

void string_upr(char s[])
{
    int c = 0;

    while (s[c] != '\0') {
        if (s[c] >= 'a' && s[c] <= 'z') {
            s[c] = s[c] - 32;
        }
        c++;
    }

}

int main ()
{
    char str[100];

    printf("Enter your string : ");
    gets(str);

    string_upr(str);

    printf("Upper case is : %s\n\n", str);

    return 0;
}
