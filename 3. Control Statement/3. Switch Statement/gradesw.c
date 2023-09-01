#include <stdio.h>

int main ()
{
    int marks, grade;

    printf("\nEnter your mark: ");
    scanf("%d", &marks);

    grade = marks / 10;

    switch( grade )
    {
        case 10:
        case 9:
            printf("Your grade is A\n");
            break;

        case 8:
            printf("Your grade is B\n");
            break;

        case 7:
            printf("Your grade is C\n");
            break;
        case 6:
            printf("Your Grade is D\n");
            break;
        default:
            printf("Your grade is F\n");
    }

    return 0;
}
