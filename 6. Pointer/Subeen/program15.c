#include <stdio.h>

int main ()
{
    char c = 'A';
    char *p;

    p = &c;

    printf("Address of c : %x\n", p);
    printf("Address of p : %x\n", &p);

    return 0;
}
