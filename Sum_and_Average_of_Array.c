#include <stdio.h>
int sum(int arr[], int size);

int main(void) {
  int arr[5];
  printf("Welcome to Sum and Average of Array.\n");
  for(int i = 0; i < 5; i++) {
    printf("please enter the %dth array number: ", i + 1);
    scanf("%d", &arr[i]);
  }
    int addition = sum(arr, 5);
    float avg = addition / 5.0;
    printf("Sum: %d and Average: %.2f", addition, avg);
    return 0;
  }
  


int sum(int arr[], int size) {
  int addition = 0;
  for(int i = 0; i < size; i++) {
    addition += arr[i];
  }
  return addition;
}