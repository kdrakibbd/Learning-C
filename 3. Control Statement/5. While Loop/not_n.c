#include <stdio.h>
#include <string.h>

int main ()
{
    char ch;

    printf("Press any key without N or n for a noisy sound : ");
    scanf("%c", &ch);

    while (ch != 'N' && ch != 'n') {
        printf("\a");
        printf("\b");
    }

    printf("\nThank you for not hearing a noisy sound.\n");

    return 0;
}
