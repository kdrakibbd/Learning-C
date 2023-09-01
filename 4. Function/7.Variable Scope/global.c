#include <stdio.h>

int ratna = 15, nipu = 15, romi = 15;

void func_1(void)
{
    printf("\nIn func_1 function: \n\t");
    printf("Ratna = %d\n\t", ratna);
    printf("Nipu = %d\n\t", nipu);
    printf("Romi = %d\n\t", romi);
}

int main ()
{
    printf("\nIn main function: \n\t");
    printf("Ratna = %d\n\t", ratna);
    printf("Nipu = %d\n\t", nipu);
    printf("Romi = %d\n\t", romi);

    func_1();

    return 0;
}
