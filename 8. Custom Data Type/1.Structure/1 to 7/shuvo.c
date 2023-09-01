#include <stdio.h>

int main ()
{
    struct student
    {
        char* name;
        int id;
        char* depname;
        float cgpa;

    }sumon, shuvo = {"Shuvo", 122344, "Civil", 3.00};

    sumon = shuvo;

    printf("Name     : %s\n", sumon.name);
    printf("id       : %d\n", sumon.id);
    printf("Dep Name : %s\n", sumon.depname);
    printf("CGPA     : %0.2f\n", sumon.cgpa);

    return 0;
}
