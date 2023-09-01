#include <stdio.h>

int main ()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 600) {
        printf("Passed in 1st division.\n");
    }

    else if (marks >= 450) {
        printf("Passed in 2nd division\n");
    }

    else if (marks >= 330) {
        printf("Passed in 3rd division\n");
    }

    else {
        printf("Sorry, Faielled !!!\n");
    }

    return 0;
}
