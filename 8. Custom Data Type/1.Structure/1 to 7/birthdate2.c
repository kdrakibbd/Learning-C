#include <stdio.h>

void B_date(int x, int y, int z)
{
    printf("Sumon : %d\n", x);
    printf("Bakku : %d\n", y);
    printf("jomir : %d\n", z);
}

int main()
{
    struct old {
        int sumon;
        int bakku;
        int jomir;
    };

    struct old birth;

    scanf("%d %d %d", &birth.sumon, &birth.bakku, &birth.jomir);

//    birth.sumon = 18;
//    birth.bakku = 20;
//    birth.jomir = 30;

    B_date(birth.sumon, birth.bakku, birth.jomir);

    return 0;
}
