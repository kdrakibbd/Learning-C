#include <stdio.h>

void start(void);
void ends(void);

#pragma startup start
#pragma exit ends

void start(void) {
    printf("Program start\n");
}

void ends(void) {
    printf("Program ends\n");

}

int main()
{
    printf("Statement inside main()\n");

    return 0;
}
