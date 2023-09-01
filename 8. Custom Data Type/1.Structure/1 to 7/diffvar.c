#include <stdio.h>

int main ()
{
    struct
    {
        int nipu;
        int romi;
    }showkat, ratna;

    showkat.nipu = 160;

    ratna = showkat;

    printf("%d\n", ratna.nipu);

    return 0;
}
