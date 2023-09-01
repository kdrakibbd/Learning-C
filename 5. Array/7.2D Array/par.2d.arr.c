#include <stdio.h>

void function(int array[][5], int n)
{
    int i, j;
    for (i = 0;i < n;i++) {
        for (j = 0;j < 5;j++) {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int sumon[1][5] = {{1,2,3,4,5}};
    int rakib[2][5] = {{1,2,3,4,5}, {1,2,3,4,5}};
    int kdsum[3][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};
    int shuvo[4][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};

    printf("\nElement of sumon array is : \n\n");
    function(sumon, 1);

    printf("\nElement of rakib array is : \n\n");
    function(rakib, 2);

    printf("\nElement of kdsum array is : \n\n");
    function(kdsum, 3);

    printf("\nElement of shuvo array is : \n\n");
    function(shuvo, 4);



    return 0;
}
