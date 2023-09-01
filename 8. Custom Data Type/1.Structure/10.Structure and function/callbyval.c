#include <stdio.h>

struct person
{
    char* name;
    int age;
};

void showperson(struct person sumon);

int main()
{
    struct person niton;

    niton.name = "Sumon";
    niton.age = 20;

    printf("Int main () , Before calling\n");
    printf("Name : %s   Age : %d\n", niton.name, niton.age);

    printf("\n\nIn showpersonalinformation()");

    showperson(niton);

    printf("\nInt main (), after calling");
    printf("\nName : %s   Age : %d\n", niton.name, niton.age);

    return 0;
}

void showperson(struct person sumon)
{
    sumon.name = "Rakibul";
    sumon.age = 22;

    printf("\nName : %s   Age : %d\n", sumon.name, sumon.age);
}
