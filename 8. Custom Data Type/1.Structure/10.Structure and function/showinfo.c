#include <stdio.h>

struct person
{
    char* name;
    int age;
};

int main ()
{
    struct person niton;

    niton.name = "M Kamuzzaman";
    niton.age = 27;

    showinfo(niton);

    return 0;
}

void showinfo(struct person p1)
{
    printf("Name is : %s    Age is : %d\n", p1.name, p1.age);
}
