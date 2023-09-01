#include <stdio.h>

int main ()
{
	struct student
	{
		char name[30];
		char dep[10];
		int sem;
		int roll;

	};

	struct student bio[5];
	int i;

	for (i = 0;i < 5;i++) {
		printf("Student %d : ", i+1);
		scanf("%s %s %d %d", bio[i].name, bio[i].dep, &bio[i].sem, &bio[i].roll); // 6 INPUT NISSE
	}

	printf("NAME  :  DEPARTMENT  :  SEMISTER  :  ROLL\n");
	printf("______________________________________________\n");

	for (i = 0;i < 5;i++) {
		printf("%10s  %12s  %10d  %10d\n",bio[i].name, bio[i].dep, bio[i].sem, bio[i].roll );
	}

	return 0;
}
