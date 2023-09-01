#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	char dep[10];
	int* roll;
	int* reg;
	int* shift;
	float* cgpa;
} sumon, *ptr = &sumon;

int main ()
{
	int roll = 735704;
	int reg = 643295;
	int shift = 1;
	float cgpa = 3.30;
	
	strcpy(sumon.name, "Sumon Hasan");
	strcpy(sumon.dep, "CSE");
	sumon.roll = &roll;
	sumon.reg = &reg;
	sumon.shift = &shift;
	sumon.cgpa = &cgpa;
	
	//using simple variable
	
	printf("Student name is     : %s\n", sumon.name);
	printf("Student dep is      : %s\n", sumon.dep);
	printf("Student roll is     : %d\n", *sumon.roll);
	printf("Student reg is      : %d\n", *sumon.reg);
	printf("Student shift is    : %d\n", *sumon.shift);
	printf("Student cgpa is     : %f\n\n", *sumon.cgpa);
	
	// using pointer 
	
	printf("Student name is     : %s\n", ptr->name);
	printf("Studnet dep is      : %s\n", ptr->dep);
	printf("Student roll is     : %d\n", *ptr->roll);
	printf("Student reg is      : %d\n", *ptr->reg);
	printf("Student shift is    : %d\n", *ptr->shift);
	printf("Student cgpa is     : %f\n", *ptr->cgpa);
	
	
	return 0;
}
