#include <stdio.h>

int main()
{
    char* ch1 = "Hello ! world using <pointer>.";
    char ch2[] = "Hello ! world using <array>";

    printf("%s\n%s\n", ch1, ch2);
    puts(ch1);
    putchar(ch2);

    return 0;
}
