#include <stdio.h>
#define pi 3.14


int main ()
{
    int a;
    const int id_no = 1;

    a = 10;

    printf("\nThe value of a Is %d\n", a);
    printf("\nPres any key . . . . \n");

    a = 15;
    printf("\nBut Now value of a is %d\n", a);

    printf("pi value is %lf\n", pi);

    printf("Id no. is %d\n", id_no);

    return 0;
}
