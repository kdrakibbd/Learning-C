#include <stdio.h>
#include <string.h>

int main ()
{
    char* str; // vul declear

    printf("Enter your string : ");
    gets(str);


    strupr(str);

    printf("\nUpper case of your string :");
    puts(str);

    return 0;
}
