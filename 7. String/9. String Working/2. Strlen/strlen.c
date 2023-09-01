#include <stdio.h>
#include <string.h>

int main()
{
    char _address[100];
    int length;

    gets(_address);

    length = strlen(_address);

    printf("\nString is : %s", _address);
    printf("\nThis string contains %d characters.", length);

    return 0;
}
