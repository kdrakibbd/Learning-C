#include <stdio.h>

void change_val(int x, int y, int z)
{
    printf("\nOrginal value of x, y, z : %d  %d  %d\,", x, y, z);
    x = 100;
    y = 200;
    z = 300;

    printf("\nchanging value of x, y, and z : %d   %d   %d\n", x, y, z);
}

int main ()
{
    int x = 10, y = 20, z = 30;

    change_val(x, y, z);

    printf("\nValue of x , y, z is int main () : %d\t %d\t %d\t\n", x, y, z);

    return 0;
}
