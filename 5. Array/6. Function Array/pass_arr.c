#include <stdio.h>

void func(int rakib[])
{
    int i;

    for (i = 0;i < 5;i++) {
        printf("%d\n", rakib[i]);
    }
}

int main ()
{
    int sumon[5] = {10,20,30,40,50};

    func(sumon);

    return 0;
}
