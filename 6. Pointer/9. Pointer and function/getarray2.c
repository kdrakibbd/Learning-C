#include <stdio.h>

void funcX(int *getarray, int x)
{
    int n;

    for (n = 0;n < 5;n++) {
        printf("%d   %d\n", getarray[n], *(getarray+n));
    }

}

int main ()
{
    int sumon[5] = {10, 20, 30, 40, 50};

    funcX(sumon, 5);

    return 0;
}
