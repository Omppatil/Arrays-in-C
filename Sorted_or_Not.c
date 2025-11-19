#include <stdio.h>
int is_sorted(int arr[], int size);

int main(void) {
  int arr1[5] = {12, 34, 56, 77, 100};
  int arr2[5] = {100, 98, 87, 56, 23};
  int arr3[5] = {1, 0, 45, 23, 100};

  if(is_sorted(arr1, 5)) {
    printf("Array 1 is sorted.\n");
  } else {
    printf("Array is not sorted.\n");
  }
  if(is_sorted(arr2, 5)) {
  printf("Array 2 is sorted.\n");
} else {
  printf("Array is not sorted.\n");
}
  if(is_sorted(arr3, 5)) {
  printf("Array 3 is sorted.\n");
} else {
  printf("Array is not sorted.\n");
}
  return 0;
}

int is_sorted(int arr[], int size) {
  int decreasing = 1;
  int increasing = 1;
  for(int i = 1; i < size; i++) {
    if(arr[i] > arr[i - 1]) {
      decreasing = 0;
    } else if(arr[i] < arr[i - 1]) {
      increasing = 0;
    }
  }
  return increasing || decreasing;
}