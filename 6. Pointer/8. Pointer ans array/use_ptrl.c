#include <stdio.h>

int main()
{
    int n, score[5] = {90, 85, 93, 98, 89};

    for (n = 0;n < 5;n++) {
        printf("\n Score of student no [#%d] is %d\n", n+1, score[n]);
    }

    return 0;
}
