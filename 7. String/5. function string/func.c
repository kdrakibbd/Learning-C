#include <stdio.h>

int stringlength(char* str);

int main ()
{
    char* pch = "sumon";
    int len;

    len = stringlength(pch);

    printf("\nString Length: %d", len);

    return 0;
}
int stringlength(char* str)
{
    int n = 0;

    while (n++, *str++ != '\0'); /*problem*/

    return n;

}
