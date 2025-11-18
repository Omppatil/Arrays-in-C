#include <stdio.h>
int main(void) {
  int marks[5];
  int no_of_students = 5;

  for(int i = 0; i < no_of_students; i++) {
    printf("Please enter the marks for student %d: ", i + 1);
    scanf("%d", &marks[i]);
  }

  for(int i = 0; i < no_of_students; i++) {
    printf("\nMarks obtained by student %d are: %d", i + 1, marks[i]);
  }
  return 0;
}