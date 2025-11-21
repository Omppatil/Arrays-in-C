#include <stdio.h>

int sum(int arr[][3], int rows, int cols);

int main(void) {
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

  printf("Welcome to Sum and Average of elements in array.\n");
  int Add = sum(arr, 3, 3);
  printf("\nSum of all the elements: %d", Add);
  float Avg = Add / 9.0;
  printf("\nAverage of all the elements: %.2f", Avg);
}

int sum(int arr[][3], int rows, int cols) {
  int sum = 0;
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      sum += arr[i][j];
    }
  }
  return sum;
}