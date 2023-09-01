#include <stdio.h>

struct person
{
    char* name;
    int age;
};

void showinfo(struct person* ptr)
{
    ptr->name = "Sumon Vai";
    ptr->age =12;

}

int main()
{
    struct person rana;

    rana.name = "Rakibul islam sumon";
    rana.age = 22;

    printf("Int main () , before calling\n");
    printf("Name : %s   Age : %d\n", rana.name, rana.age);

    showinfo(&rana);

    printf("\n\nInt main (), after calling \n");
    printf("Name : %s   Age : %d\n", rana.name, rana.age);

    return 0;
}
