#include <stdio.h>

void reverse(int arr[], int size);
void print_elements(int arr[], int size);
void swap(int *first, int *second);

int main(void) {
  int arr1[] = {1, 2, 3, 4, 5, 6};
  int arr2[] = {5, 4, 3, 2, 1};

  printf("\nReverse this array: \n");
  print_elements(arr1, 6);
  reverse(arr1, 6);
  printf("\nAfter reversing: \n");
  print_elements(arr1, 6);

  
  printf("\nReverse this array: \n");
  print_elements(arr2, 5);
  reverse(arr2, 5);
  printf("\nAfter reversing: \n");
  print_elements(arr2, 5);

  return 0;
}

void print_elements(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    printf(" %d", arr[i]);
  }
}

void reverse(int arr[], int size){
  for(int i = 0; i < size / 2; i++) {
    swap(&arr[i], &arr[size - 1 - i]);
  }
}

void swap(int *first, int *second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}