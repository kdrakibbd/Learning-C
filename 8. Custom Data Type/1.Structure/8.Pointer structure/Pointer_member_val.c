#include <stdio.h>
#include <string.h>


struct person {
	char name[20];
	int age;
}niton, rokib;

int main ()
{

	strcpy(niton.name, "M Kamruzzaman");
	niton.age = 27;
	
	rokib = niton;
	
	printf("Niton: NAME IS : %s     AGE is: %d\n", niton.name, niton.age);
	printf("Rokib: NAME IS : %s     AGE is: %d\n", rokib.name, rokib.age);
	
	strcpy(rokib.name, "Sumon Hasan");
	rokib.age = 26;
	
	printf("Niton: NAME IS : %s     AGE is: %d\n", niton.name, niton.age);
	printf("Rokib: NAME IS : %s     AGE is: %d\n", rokib.name, rokib.age);
	
	
	return 0;
}
