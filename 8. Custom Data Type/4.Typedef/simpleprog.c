#include <stdio.h>
#include <string.h>

int main ()
{
    struct student
	{
		char* name;
		int roll;
		int sem;
		int shift;
		float cgpa;
		
	};
	
	struct student info;
	
	strcpy(name, "Sumon Hasan");
	info.roll = 735704;
	info.sem = 6;
	info.shift = 1;
	info.cgpa = 3.76;
	
	printf("NAME IS : %s\n", name);
	printf("ROLL IS : %d\n", info.roll);
	printf("SEM  IS : %d\n", info.sem);
	printf("SHIF IS : %d\n", info.shift);
	printf("CGPA IS : %f\n", info.cgpa);
	
	return 0;
}
