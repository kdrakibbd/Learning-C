#include <stdio.h>

void encrypt_pass(char* _pass)
{
    while (*_pass != '\0') {
        *_pass++ ^= 52;
    }
}

int main ()
{
    char _pass[8];

    printf("Enter your password : ");

    gets(_pass);

    enctypt_pass(_pass);

    puts(_pass);

    return 0;
}
