#include <stdio.h>

void print_msg(void)
{
    printf("Factarial number: \n");
}

int factarial(int x)
{
    int i, sum = 1;

    for (i = 1;i <= x;i++) {
        sum *= i;
    }

    printf("The factaril number is %d is %d\n", x, sum);

}

int main()
{
    int a;
    scanf("%d", &a);

    print_msg();
    factarial(a);

    return 0;
}
