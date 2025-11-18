#include <stdio.h>
int main(void) {
  int marks[2][3];

  for(int row = 0; row < 2; row++) {
    for(int col = 0; col < 3; col++) {
      printf("Marks of student %d for Subject %d are: ", row + 1, col + 1);
      scanf("%d", marks);
    }
  }
  return 0;
}