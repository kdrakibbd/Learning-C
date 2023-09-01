#include <stdio.h>

int main ()
{
    int test_score = 90;
    char current_grade = 'B';

    if (test_score >= 90) {
        if (current_grade == 'C') {
             printf("\n\a Congratulations! You Get another A");
        }
        else{
            printf("Onno kisu\n");
        }
    }
    else
        printf("\n\a Sorry ! You should work hard.");

    return 0;
}
