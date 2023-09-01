#include <stdio.h>

int main ()
{
    int score;

    printf("Enter Your score: ");
    scanf("%d", &score);

    if ((score >= 90) &&(score <= 100)) {
        Printf("Your grade is A\n");
    }
    else if ((score < 90) && (score >= 80)) {
        printf("Your grade is B\n");
    }
    else if ((score < 80) && (score >= 70)) {
        printf("Your Grade is C\n");
    }
    else {
        printf("Your Grade is fail\n");
    }

    return 0;
}

