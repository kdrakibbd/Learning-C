#include <stdio.h>

struct person
{
    char* name;
    int roll;

};

void showinfo(struct person* rakib)
{
    printf("Name : %s   Roll : %d\n",rakib->name,rakib->roll);
}

int main()
{
    struct person sumon, *ptr;

    sumon.name = "Sumon";
    sumon.roll = 123456;

    showinfo(&sumon);

    return 0;
}
