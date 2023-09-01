#include <stdio.h>

void call_by_value(int x, int y, int z);

int main ()
{
    int rotna , ripu, romi;

    rotna = 1, ripu = 2, romi = 3;

    call_by_value(rotna, ripu, romi);

    printf("\nAfter function calling : %d %d %d\n", rotna, ripu, romi);

    return 0;
}

void call_by_value(int x, int y, int z)
{
    printf("Orginal value are : %d  %d  %d\n", x, y, z);

    x += 100;
    y += 101;
    z += 102;

    printf("\nAfter changing the valule : %d %d %d", x, y,z);

}
