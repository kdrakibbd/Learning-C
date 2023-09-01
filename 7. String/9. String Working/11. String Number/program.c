#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("String to integer : %d\n", atoi("22500aBc"));
    printf("String to float   : %lf\n", atof("910500.50"));
    printf("String to long    : %d\n", atol("sumon"));

    return 0;
}
