#include <stdio.h>

void sqr_num(int n)
{
    int i;

    printf("NUMBER : SQUARE.\n");

    for (i = 1;i <= n;i++) {
        printf("%4d   %4d\n", i, i*i);
    }

}

void cube_num(int a)
{

    int i;

    printf("NUMBER : CUBIC\n");

    for (i = 1;i <= a;i++) {
        printf("%4d   %d\n", i, i*i*i);
    }

}

int main ()
{
    int n, a;

    printf("Enter your number: ");
    scanf("%d", &n);

    sqr_num(n);

    printf("\n\n\n");

    printf("Enter your number: ");
    scanf("%d", &a);

    cube_num(a);

    return 0;
}
