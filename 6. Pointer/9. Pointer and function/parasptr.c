#include <stdio.h>

void change_val(int *x, int *y, int *z)
{
    printf("\nOrginal value of x , y, z is : \t%d\t%d\t%d", *x,*y, *z);
    *x = 100;
    *y = 200;
    *z = 300;

    printf("\nValue of x , y and z : \t%d\t%d\t%d", *x, *y, *z);

}

int main ()
{
    int x = 10, y = 20, z = 30;

    change_val(&x, &y, &z);

    printf("\nvalue of x , y and z (int main): \t%d\t%d\t%d", x, y, z);

    return 0;
}
