#include <stdio.h>

struct student
{
    char* name;
    long int id;
    char* dep_name;
    float cgpa;
}sumon = {"Sumon", 12345, "CSE", 3.75};

int main ()
{
    printf("Student name    : %s\n", sumon.name);
    printf("Id_no#          : %d\n", sumon.id);
    printf("Dep name        : %s\n", sumon.dep_name);
    printf("Cgpa is         : %f\n", sumon.cgpa);

    return 0;
}
