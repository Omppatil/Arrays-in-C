#include <stdio.h>

void copy_arr(char *arr, int size, char *new_arr);
void print_elements(char *arr, int size);

int main(void) {
  char arr[] = {'A', 'B', 'c', 'd', 'e', 'F'};
  char new_arr[6];

  printf("Welcome to Coping of array using Pointer.\n\n");
  printf("Original Array: ");
  print_elements(arr, 6);

  copy_arr(arr, 6, new_arr);
  printf("\nCopied Array: ");
  print_elements(new_arr, 6);
  return 0;
}

void print_elements(char *arr, int size) {
  for(int i = 0; i < size; i++) {
    printf(" %c", arr[i]);
  }
}

void copy_arr(char *arr, int size, char *new_arr) {
  for(int i = 0; i < size; i++) {
    *(new_arr + i) = *(arr + i);
  }
}