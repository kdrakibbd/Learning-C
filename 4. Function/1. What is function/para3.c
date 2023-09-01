#include <stdio.h>

int big_func(int x, int y, int z)
{
    if (x > y && x > z) {
        return x;
    }
    else if (y > x && y > z) {
        return y;
    }

    else {
        return z;
    }


}

int main ()
{
    int a, b, c, bigNumber;

    printf("Enter your 3 number : ");
    scanf("%d %d %d", &a, &b, &c);

    bigNumber = big_func(a, b, c);

    printf("The Big number is : %d\n", bigNumber);

    return 0;
}
