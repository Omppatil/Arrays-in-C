#include <stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element);
void print_elements(int arr[], int size);

int main(void) {
  int arr[8] = {34, 12, 56, 3, 5, 9, 3, 0};
  int new_arr[8];
  int new_size;

  delete(arr, 8, new_arr, &new_size, 5);
  printf("\n\nArray after deleting 5 is: ");
  print_elements(new_arr, new_size);

  delete(arr, 8, new_arr, &new_size, 3);
  printf("\n\nArray after deleting 3 is: ");
  print_elements(new_arr, new_size);

  delete(arr, 8, new_arr, &new_size, 56);
  printf("\n\nArray after deleting 56 is: ");
  print_elements(new_arr, new_size);

  delete(arr, 8, new_arr, &new_size, 10);
  printf("\n\nArray after deleting 10 is: ");
  print_elements(new_arr, new_size);
  return 0;
}

void print_elements(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    printf(" %d", arr[i]);
  }
}

void delete(int arr[], int size, int new_arr[], int *new_size, int element) {
  int j = 0;
  for(int i = 0; i < size; i++) {
    if(arr[i] != element) {
      new_arr[j] = arr[i];
      j++;
    }
  }
  *new_size = j;
}