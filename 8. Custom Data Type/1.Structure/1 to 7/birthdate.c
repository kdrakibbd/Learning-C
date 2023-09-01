#include <stdio.h>

void B_date(int x, int y, int z)
{
    printf("Sumon's birth date is : %d - %d - %d\n", x, y, z);
}

int main ()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct date birth_date;

    birth_date.day = 1;
    birth_date.month = 1;
    birth_date.year = 1998;

    B_date(birth_date.day, birth_date.month, birth_date.year);

    return 0;
}
