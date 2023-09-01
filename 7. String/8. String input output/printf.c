#include <stdio.h>

int main()
{
    char ctr1_char[] = "%s\n";
    char func_argu[] = "Welcome to the the world of c programming";

    printf(ctr1_char, func_argu);
    printf("%s\n", func_argu);
    printf(func_argu);

    return 0;
}
