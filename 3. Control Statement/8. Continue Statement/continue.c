#include <stdio.h>

int main ()
{
    int count, score, total;

    count = total = 0;

    while (count < 4) {
        printf("\nEnter your score: ");
        scanf("%d", &score);

        if ((score < 0) || (score > 100)) {
            continue;
        }

        total += score;

        printf("\nTotal score is : %d\n", total);
        total = 0;
        count++;

    }

    return 0;
}
