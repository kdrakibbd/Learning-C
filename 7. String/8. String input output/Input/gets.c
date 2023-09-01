#include <stdio.h>

int main()
{
    char name[64];

    printf("\nYour Name please :");
    gets(name);

    printf("\n\nSo, You are %s \n\n", name);
    puts(name);

    return 0;
}
