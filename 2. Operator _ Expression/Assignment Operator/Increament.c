#include <stdio.h>

int main ()
{
    int var;

    var = 1;

    printf("Using postfix (var++) var = %d\n", var++);
    printf("Value after incremnet is : %d\n", var);

    var = 1;

    printf("Using prefix (++var) var = %d\n", ++var);
    printf("Value of after increment is : %d\n", var);

    return 0;
}
