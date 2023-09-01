#include <stdio.h>
#include <string.h>

int main ()
{
    union student
    {
        char name[20];
        int roll;
        int sem;
        float cgpa;
    }sumon;

    strcpy(sumon.name, "Sumon Hasan");
    printf("Name Is : %s\n", sumon.name);

    sumon.roll = 123456;
    printf("Roll    : %d\n", sumon.roll);

    sumon.sem = 6;
    printf("Semister: %d\n", sumon.sem);

    sumon.cgpa = 3.76;
    printf("CGPA    : %f\n", sumon.cgpa);

    return 0;
}
