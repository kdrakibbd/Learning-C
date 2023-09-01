#include <stdio.h>

int main ()
{
    int i;
    char* str[5] = {"sumon hasan", "imran khan", "tina bakku", "Rakibul islam", "shuvo dah", "aminul islam"};

    for (i = 0; i < 5;i++) {
        printf("%s\n", str[i]);
    }


    return 0;
}
