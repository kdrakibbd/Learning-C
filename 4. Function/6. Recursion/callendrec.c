#include <stdio.h>

void Recursivecall(int);

int main ()
{
    Recursivecall(5);

    return 0;
}

void Recursivecall(int x)
{
    if (x == 0)
        return;
    printf("%d\n", x);
    Recursivecall(x - 1);
    printf("Call End\n");

}
