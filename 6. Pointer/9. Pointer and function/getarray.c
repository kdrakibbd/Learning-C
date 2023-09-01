#include <stdio.h>

void funcx(int *get_array, int x)
{
    int n;

    for (n = 0;n < x;n++) {
        printf("\n %d  %d", get_array[n], *(get_array+n));
    }

}

int main()
{
    int niton[5] = {10, 20, 30, 40, 50};

    funcx(niton, 5);

    return 0;
}
