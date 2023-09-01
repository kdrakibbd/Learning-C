#include <stdio.h>

void showval(int);

int main ()
{
    int i = 10;
    showval(i);

    i = 20;
    showval(i);

    return 0;
}
void showval(int x)
{
    printf("%d  ", x);
}
