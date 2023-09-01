#include <stdio.h>

int main ()
{
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;

    printf("Less than (<) operator:\n");
    printf("\t x < y: %d\n", x < y);
    printf("\t y < x: %d\n", y < x);

    printf("Less than or equal to (<=) operator:\n");
    printf("\t x <= y: %d\n", x <= y);
    printf("\t y <= x: %d\n", y <= x);

    printf("Greater than (>) operator:\n");
    printf("\t x > y: %d\n", x > y);
    printf("\t y > x: %d\n", y > x);

    printf("Greater than or equal to (>=) operator:\n");
    printf("\t x >= y: %d\n", x >= y);
    printf("\t y >= x: %d\n", y >= x);

    printf("Equal to (==) operator:\n");
    printf("\t x == y: %d\n", x == y);
    printf("\t y == z: %d\n", y == z);


    printf("Not Equal to (!=) operator:\n");
    printf("\tx != y: %d\n", x != y);
    printf("\ty != z: %d\n", y != z);


    return 0;
}
