#include <stdio.h>
int occurences(int arr[], int size, int elements);

int main(void) {
  int arr[10] = {45, 56, 2, 45, 78, 56, 100, 2, 98, 45};
  printf("Welcome to finding occurrences of thr elemets.\n");
  int result = occurences(arr, 10, 45);
  printf("\nThe number of occurrence of 45: %d", result);
  result = occurences(arr, 10, 56);
  printf("\nThe number of occurrence of 56: %d", result);
  result = occurences(arr, 10, 2);
  printf("\nThe number of occurrence of 2: %d", result);
  result = occurences(arr, 10, 100);
  printf("\nThe number of occurrence of 100: %d", result);
  result = occurences(arr, 10, 101);
  printf("\nThe number of occurrence of 101: %d", result);

  return 0;
}

int occurences(int arr[], int size, int elements) {
int counter;
for(int i = 0; i < size; i++) {
  if(arr[i] == elements) {
    counter++;
  }
}

  return counter;
}