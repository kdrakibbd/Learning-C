#include <stdio.h>

int main ()
{
    FILE* in_data;
    char ch;

    in_data = fopen("test.txt", "w");

    printf("A data file is open for you.\nWrite somethin\nPress CONT+Z at end\n");

    while ((ch = getchar() != EOF)) {
        putc(ch, in_data);
    }

    fclose(in_data);

    return 0;
}
