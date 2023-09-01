#include <stdio.h>

int main ()
{
    int n = 10;

    printf("In scope Level 1 : n = %d\n", n);
        {
            n++;
            printf("In scope Level 2 : n (n++) = %d\n", n);
                {
                    int n = 1;
                    printf("\nIn sscoep level 3 : n = %d\n", n);
                    n++;
                    printf("In scope level 3 : n (n++) = %d\n\n", n);
                }
            printf("In scope level 2: n = %d\n", n);
        }
    printf("In scope level 1 : n = %d\n", n);

    return 0;
}
