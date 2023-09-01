#include <stdio.h>

int main ()
{
	struct student
	{
		char name[30];
		char dep[20];
		int sem;
		int roll;

	};

	struct student bio[0];
    int i;

    for (i = 0;i < 1;i++) {
        scanf("%s %s %d %d",bio[i].name, bio[i].dep, &bio[i].sem, &bio[i].roll);
    }



	printf("NAME  :  DEPARTMENT  :  SEMISTER  :  ROLL\n");
	printf("______________________________________________\n");

	for (i = 0;i < 1;i++) {
		printf("%s    %s    %d    %d\n",bio[i].name, bio[i].dep, bio[i].sem, bio[i].roll );
	}

	return 0;
}

