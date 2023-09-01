#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100];

    printf("Enter your string : ");
    gets(str);


    printf("Upper case is : %s\n\n", strupr(str));


}
