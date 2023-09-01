#include <stdio.h>
#include <string.h>

int main()
{
    char country_name[36] = "People's Republic of ";

    strcat(country_name, "Bangladesh");

    printf("\nBangladesh full name is : %s", country_name);

    return 0;
}
