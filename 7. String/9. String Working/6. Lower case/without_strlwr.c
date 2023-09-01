#include <stdio.h>

void string_lower(char str[])
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i]  >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter your string : ");
    gets(str);

    string_lower(str);

    printf("Lower case is : %s\n\n", str);

    return 0;
}
