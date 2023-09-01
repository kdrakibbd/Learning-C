#include <stdio.h>

int main ()
{
    int id = 44;
    float gpa = 3.87;
    float cgpa = 3.78;

    printf("Address of id is   %x.\n", &id);
    printf("Adress of gpa is   %x.\n", &gpa);
    printf("Adress of cgpa is  %x.\n", &cgpa);

    return 0;
}
