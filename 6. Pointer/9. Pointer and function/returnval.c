#include <stdio.h>

int *funcx()
{
    static int x = {10, 20, 30, 40, 50};

    return x;
}

int main ()
{
    int *p, i;

    p = funcx();

    for (i = 0;i < 5;i++) {
        printf("ELement [%d] = %d\n", i, p[i]);
    }

    return 0;
}
