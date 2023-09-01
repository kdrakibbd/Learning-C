#include <stdio.h>

int main()
{
    char* city_name[6] = {"Sylet", "Barisal", "Rajshahi", "Khulna", "Chittagung", "Dhaka"};
    int n;

    for (n = 0;n < 6;n++) {
        printf("City name[#%d] is %s.\n", n+1, city_name[n]);
    }

    return 0;
}
