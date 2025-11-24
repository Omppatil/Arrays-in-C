#include <stdio.h>

const int SIZE = 4;
void print_diagonal_sum(int arr[][SIZE]);
int main(void) {
  printf("Welcome to sum of diagonals in 2D arrays.\n");
  //int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {8, 9, 10}};
  int arr1[4][4] = {{0, 1, 2, 3}, {1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  print_diagonal_sum(arr1);
  return 0;
}

void print_diagonal_sum(int arr[][SIZE]) {
  int left_ds = 0;
  int right_ds = 0;
  for(int i = 0; i < SIZE; i++) {
    left_ds += arr[i][i];
    right_ds += arr[i][SIZE - 1 -i];
  }
  printf("Sum of left diagonal elemnts: %d\n", left_ds);
  printf("Sum of right diagonal elemnts: %d\n", right_ds);

  int total_ds = left_ds + right_ds;
  printf("Sum of all diagonal elemnts: %d\n", total_ds);

  if(SIZE % 2 == 1) {
    int index = SIZE / 2;
    total_ds -= arr[index][index];
  }
  printf("Sum of all diagonal elemnts except center element: %d\n", total_ds);

}