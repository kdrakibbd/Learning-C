#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
    char name[10];
    int age;
};

int main ()
{
    struct person niton, rokib;

    strcpy(niton.name, "M Kamruzzaman");
    niton.age = 27;

    rokib = niton;

    printf("niton : NAME = %s   AGE = %d\n", niton.name, niton.age);
    printf("rokib : NAME = %s   AGE = %d\n", rokib.name, rokib.age);

    strcpy(rokib.name, "Rokibul islam");
    rokib.age = 26;

    printf("niton : NAME = %s   AGE = %d\n", niton.name, niton.age);
    printf("rokib : NAME = %s   AGE = %d\n", rokib.name, rokib.age);

    return 0;
}
