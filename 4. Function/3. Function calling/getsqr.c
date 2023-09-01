#include <stdio.h>

void print_msg(void)
{
    printf("This is the print msg funtion");

}

int square_valus(int valus)
{
    print_msg();
    return (valus *valus);

}

int main ()
{
    int value;

    value = square_valus(5);

    printf("\nSquare value is %d", value);

    return 0;
}
