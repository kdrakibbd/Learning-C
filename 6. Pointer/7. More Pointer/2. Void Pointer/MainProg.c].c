#include <stdio.h>

int main ()
{
    char ch = 'n';
    int i, x = 300;
    float y = 10.375;
    double z = 99.99;

    char *chPtr;
    void *ptr;

    chPtr = (char*)&ptr;

    for (i = 0;i < 18;i++) {
        printf("Address = %x  Data = %02X\n",chPtr++, (unsigned char)*ptr);
    }

    printf("\n At the begining : ptr = %02X\n", &ptr, ptr);

    ptr = &ch;
    printf("\n Atfer ptr = &ch: \n");
    printf("    ptr = %x   *ptr = 02X\n", ptr, *(char*)ptr);

    return 0;
}
