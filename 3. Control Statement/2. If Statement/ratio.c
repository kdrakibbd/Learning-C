#include <stdio.h>.

int main ()
{
    int p, q, r, s;
    float ratio;

    printf("\n Enter Your 4 intiger (separated by space): ");
    scanf("%d %d %d %d", &p, &q, &r, &s);

    if ((r -s) == 0) {
        printf("\n Ratio is infinity, because (r-s) is 0\n");
        exit(0);
    }

    ratio = (float)(p+q) / (float)(r-s);

    printf("\n Ratio is : %0.2f\n", ratio);

    return 0;
}
