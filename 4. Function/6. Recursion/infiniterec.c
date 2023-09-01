#include <stdio.h>

void recursivecall(int x)
{
    printf("%d\n", x);

    recursivecall(x+1);

}

int main ()
{
    recursivecall(1);

    return 0;
}
