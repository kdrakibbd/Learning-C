#include <stdio.h>

int x = 10;

void global_var(void)
{
    //x = 2; ei man ta dile local hisebe kaj korbe and ja automatic variable, ar na dile global variable

    printf("x = %d\n", x);
    x++;
    printf("Now X++ is : %d\n", x);
}

int main ()
{
    printf("First Time: \n");
    global_var();

    printf("Secound Time: \n");
    global_var();

    return 0;
}
