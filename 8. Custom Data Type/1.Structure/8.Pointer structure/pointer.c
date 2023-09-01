#include <stdio.h>
#include <string.h>

int main ()
{
    struct student
    {
        char name[20];
        char dept_name[10];
        int* id;
        float* cgpa;
    };

    struct student niton, *str_ptr = &niton;

    int x = 44;
    int y = 3.24;

    strcpy(niton.name, "M. Rakibul islam");
    niton.id = &x;
    strcpy(niton.dept_name, "CSE");
    niton.cgpa = &y;

    printf("%s  %d  %s  %.2f\n", niton.name, *niton.id, niton.dept_name, *niton.cgpa);

    printf("%s  %d  %s  %.2f\n", str_ptr->name, *str_ptr->id, str_ptr->dept_name, *str_ptr->cgpa);

    return 0;
}
