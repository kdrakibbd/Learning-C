#include <stdio.h>

void copy_msg() {

	printf("Hello sumon\n");
}

int main(int argc, char const *argv[])
{
	int i;

	copy_msg();

	for (i = 1;i <= 10;i++) {
		copy_msg();
	}

	copy_msg();

	return 0;
}