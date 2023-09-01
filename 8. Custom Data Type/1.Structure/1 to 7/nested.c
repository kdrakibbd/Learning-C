#include <stdio.h>

int main ()
{
	 struct student
	 {
	 	char* name;
	 	long int id;
	 	char* dept_name;

	 	struct term
	 	{
	 		int sem;

	 		struct gpa
	 		{
	 			float gpa;
	 		}gpa1;
	 	}term1;

     float cgpa
	 }niton;

	 niton.name      = "Rana";
	 niton.id        = 123456;
	 niton.dept_name = "CSE";
	 niton.term1.sem = 6;
	 niton.term1.gpa1.gpa = 3.75;
	 niton.cgpa = 3.25;

	 printf("student name     : %s\n", niton.name);
	 printf("Id no            : %d\n", niton.id);
	 printf("dep name         : %s\n", niton.dept_name);
	 printf("semister         : %d\n", niton.term1.sem);
	 printf("gpa              : %f\n", niton.term1.gpa1.gpa);
	 printf("cgpa             : %f\n", niton.cgpa);


	return 0;
}
