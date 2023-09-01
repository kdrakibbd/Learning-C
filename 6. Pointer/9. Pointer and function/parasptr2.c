#include <stdio.h>

void change_val(int *x, int *y, int *z)
{
    printf("Orginal Value of a b c : %d   %d   %d\n", *x, *y, *z);

    *x = 100;
    *y = 200;
    *z = 300;

    printf("Value after changing a , b, c; %d  %d  %d\n", *x, *y, *z);

}

int main ()
{
    int a = 10, b = 20, c = 30;

    change_val(&a, &b, &c);

    printf("Value of a b c is int main : %d   %d   %d\n", a, b, c);

    return 0;
}
