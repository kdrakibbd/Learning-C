#include <stdio.h>

int main() {

  int marks, grade;

  printf("Enter your number :" );
  scanf("%d", &marks);

  grade = marks / 10;

  switch (grade) {
    case 10:
    case 9:
      printf("Your grade is A\n" );
      break;

    case 8:
      printf("Your grade is B\n");
      break;

    case 7:
      printf("Your grade is C\n");
      break;

    case 6:
      printf("Your gradei is D\n");
      break;

    default :
      printf("Your grade is fail\n");
  }

  return 0;
}
