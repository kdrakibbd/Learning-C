#include <stdio.h>

int main()
{
    int i, x[5] = {10, 20, 30, 40, 50};

    for (i = 0;i < 5;i++) {
        printf("*(x+%d) = %d\n", i, *(x+i));
    }

    return 0;
}
