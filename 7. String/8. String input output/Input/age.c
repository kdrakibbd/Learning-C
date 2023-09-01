#include <stdio.h>

int main ()
{
    char name[30];
    int age;

    printf("What is your name ? : ");
    scanf("%s", name);

    printf("\nHow old are you ? :");
    scanf("%d", &age);

    if (age <= 0) {
        printf("\nSorry ! %s , age can't be zero negetive.", name);
    }
    else {
        printf("\nHey %s, Next year you will be %d year old.\n",name, age+1 );
    }

    return 0;
}
