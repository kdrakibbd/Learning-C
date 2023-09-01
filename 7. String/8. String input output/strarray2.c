#include <stdio.h>

int main ()
{
    char* frnd_name[7] = {"Shuvo", "Aminul", "Bakku", "Raj", "Sumon", "Imran", "Jomir"};
    int i;

    for (i = 0;i < 7;i++) {
        printf("Friend name [#%d] is : %s\n", i+1, frnd_name[i]);
    }

    return 0;
}
