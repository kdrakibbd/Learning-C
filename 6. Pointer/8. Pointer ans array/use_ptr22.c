#include <stdio.h>

int main()
{
    int n, score[5];

    *(score+0) = 90;
    *(score+1) = 85;
    *(score+2) = 93;
    *(score+3) = 98;
    *(score+4) = 89;

    for (n = 0;n < 5;n++) {
        printf("\nscore of student no. [#%d] is %d\n", n+1, *(score+n));
    }

    return 0;
}
