#include <stdio.h>

int main()
{
    char name_1[30];
    char name_2[30];
    int i;

    gets(name_1);

    for (i = 0;name_1[i] != '\0';i++) {
        name_2[i] = name_1[i];
    }

    name_2[i] = '\0';

    printf("%s\n", name_2);

    return 0;
}
