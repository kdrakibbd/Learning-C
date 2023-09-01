#include <stdio.h>

int x = 100;

void local_var(void);
void static_var(void);
void global_var(void);

int main ()
{
    printf("First Time: \n");
    local_var();
    static_var();
    global_var();

    printf("Secound Time: \n");
    local_var();
    static_var();
    global_var();

    return 0;
}

void local_var(void)
{
    int x = 1;
    printf("    As a Local variable: \n\t");
    printf("x = %d\n\t", x);
    x++;
    printf("X++ = %d\n\n", x);
}

void static_var(void)
{
    static int x = 10;
    printf("    As a static variable: \n\t");
    printf("x = %d\n\t", x);
    x++;
    printf("X++ = %d\n\n", x);
}

void global_var(void)
{
    printf("    As a global variable: \n\t");
    printf("x = %d\n\t", x);
    x++;
    printf("X++ = %d\n\n", x);
}
