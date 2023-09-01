#include <stdio.h>

int main ()
{
    int a = 10;
    int b = 30;

    int c = a + b;

    printf("Addres of a is : %d\n", &a);
    printf("Address of b is : %x\n", &b);
    printf("Address of c is %x\n", &c);

    return 0;
}
