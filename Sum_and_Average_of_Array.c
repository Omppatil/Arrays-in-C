#include <stdio.h>
int sum(int num[], int size);

int main(void) {
  int num[5];
  printf("Welcome to Sum and Average of Array.\n");
  for(int i = 0; i < 5; i++) {
    printf("please enter the %dth number: ", i + 1);
    scanf("%d", &num[i]);
  }
    int addition = sum(num, 5);
    float avg = addition / 5.0;
    printf("Sum: %d and Average: %.2f", addition, avg);
    return 0;
  }
  


int sum(int num[], int size) {
  int addition = 0;
  for(int i = 0; i < size; i++) {
    addition += num[i];
  }
  return addition;
}