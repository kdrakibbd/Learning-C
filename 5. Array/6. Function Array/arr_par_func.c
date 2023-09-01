#include <stdio.h>

int main ()
{
    float sumon[5] = { 10.0,20.0, 30.0, 40.0, 50.0};
    float rakib[4] =  {1.0, 100.0, 1000.0, 10000.0};
    float kd[3] = {-5.5, -6.6, -7.7};

    printf("\nValue of sumon array : \n\n\t");
    funcX(sumon);

    printf("Value of rakib array : \n\n\t");
    funcX(rakib);

    printf("\nValue of kd array : \n\n\t");
    funcX(kd);

    return 0;
}

void funcX(float array[], int size)
{
    int n;
    for (n = 0;n < size;n++) {
        printf("%0.2f\n", array[n]);
    }
    printf("\n");
}
