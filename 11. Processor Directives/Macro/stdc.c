#include <stdio.h>

int main()
{
    #ifdef __STDC__
    printf("\nANCI c compilance");
    #else
    printf("\nNot in ANCI mode")
    #endif // __STDC__

    return 0;
}
