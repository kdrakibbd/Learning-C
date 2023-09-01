#include <stdio.h>

void loc_var(void)
{
    int ratna, nipu, romi;

    ratna = 15, nipu = 12, romi = 11;

    printf("\nRatna : %d Nipu : %d Romi : %d", ratna, nipu, romi);
}

int main()
{
    loc_var();

    printf("\nRatna : %d Nipu : %d Romi : %d", ratna, nipu, romi);

    return 0;
}
