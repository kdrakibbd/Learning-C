#include <stdio.h>

struct person
{
    char* name;
    int age;

};

void showinfo(struct person* sumon2)
{
    printf("Name : %s   Age : %d\n", sumon2->name, sumon2->age);
}

int main()
{
    struct person sumon, niton, *ptr;

    sumon.name = "sumon";
    sumon.age = 20;

    showinfo(&sumon);

    niton.name = "Niton";
    niton.age = 12;
    ptr = &niton;
    showinfo(&niton);
    showinfo(ptr);

    return 0;
}
