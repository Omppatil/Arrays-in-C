#include <stdio.h>

int search(int arr[][3], int rows, int cols, int element);

int main(void) {
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

  printf("Welcome to searching of elements in array.\n\n");
  int occ = search(arr, 3, 3, 1);
  printf("The element 1 is occurs %d times", occ);
  
  occ = search(arr, 3, 3, 5);
  printf("\nThe element 5 is occurs %d times", occ);

  occ = search(arr, 3, 3, 10);
  printf("\nThe element 10 is occurs %d times", occ);
  return 0;
}

int search(int arr[][3], int rows, int cols, int element) {
  int occ = 0;
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      if(arr[i][j] == element) {
        occ++;
      }
    }
  }
  return occ;
}