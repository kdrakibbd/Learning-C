#include <stdio.h>

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a != b) {
          printf("a is not equal to b\n");
          a = b;
    }
      else
        printf("Now is equal to b");

    return 0;
}
