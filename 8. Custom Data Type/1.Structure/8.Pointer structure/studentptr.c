#include <stdio.h>

int main ()
{
    struct student
    {
        char* name;
        int roll;
        int sem;
    }std, *ptr = &std;

    ptr->name = "sumon";
    ptr->roll = 123456;
    ptr->sem = 6;

    printf("Name : %s\nRoll : %d\nSemister : %d\n", ptr->name, ptr->roll, ptr->sem);

    return 0;
}
