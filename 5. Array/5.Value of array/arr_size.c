#include <stdio.h>
#define ARR_SIZE 5

int main ()
{
    int array[ARR_SIZE] = {10,20,30,40,50};
    int i;

    for (i = 0;i < ARR_SIZE;i++) {
        printf("Value of array[%d] is : %d\n", i, array[i]);
    }

    return 0;
}
