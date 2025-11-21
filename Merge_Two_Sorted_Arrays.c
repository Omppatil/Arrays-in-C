#include <stdio.h>

void merge_sorted_arr(int arr1[], int size1, 
                      int arr2[], int size2, 
                      int arr3[], int size3);

void print_elements(int arr[], int size);

int main(void) {
  int arr1[7] = {2, 4, 6, 8, 10, 12, 14};
  int arr2[5] = {1, 3, 5, 7, 9};
  int arr3[12];

  printf("Welcome to Merging two sorted Arrays.\n\n");
  printf("The sorted Array: \n");
  merge_sorted_arr(arr1, 7, arr2, 5, arr3, 12);
  print_elements(arr3, 12);
  return 0;
}

void merge_sorted_arr(int arr1[], int size1, 
                      int arr2[], int size2, 
                      int arr3[], int size3) {
                        
  int i = 0, j = 0, k = 0;
  while(k < size3) {
    if(j == size2 || (i < size1 && (arr1[i] < arr2[j]))) {
      arr3[k] = arr1[i];
      i++;
    } else {
      arr3[k] = arr2[j];
      j++;
    }
    k++;
  }                 
}

void print_elements(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    printf(" %d", arr[i]);
  }
}