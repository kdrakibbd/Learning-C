#include <stdio.h>

int main ()
{
	union unionJob
	{
		char name[32];
		float salary;
		int workerNo;
	}ujob;

	struct structjob
	{
		char name[32];
		float salary;
		int workerNo;	
	}sjob;

	printf("Size of nunion : %d\n",sizeof(ujob));
	printf("Size of stucture: %d\n", sizeof(sjob));

	return 0;
}