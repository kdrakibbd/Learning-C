#include <stdio.h>

#define SUM(x,y) ((x) + (y))

int main()
{
    printf("\nAdding 5+5 = %d\n", SUM(5,5));
    printf("\nAdding 5.1+5.4 = %f\n", SUM(5.1, 5.4));
    printf("\nAdding -120+1020 = %d\n", SUM(-120,1020));

    return 0;
}
