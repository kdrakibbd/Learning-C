#include <stdio.h>
#include <string.h>

char *func(void)
{
    char* ptr;
    ptr = malloc(32*sizeof(char));
    strcopy(ptr, "string from func()");

    return ptr;
}

int main ()
{
    char* ptr;
    ptr = func();
    printf("String is : %s\n", ptr);
    free(ptr);

    return 0;
}
