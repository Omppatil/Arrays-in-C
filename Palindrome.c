#include <stdio.h>

int is_palindrome(int arr[], int size);

int main(void) {
  int arr1[7] = {1, 2, 3, 4, 3, 2, 1};
  int arr2[4] = {1, 1, 1, 1};
  int arr3[5] = {2, 3, 4, 2, 1};

  if(is_palindrome(arr1, 7)) {
    printf("\nFirst array is Palindrome.\n");
  } else {
    printf("\nFirst array is not Palindrome.\n");
  }
  
  if(is_palindrome(arr2, 4)) {
    printf("\nSecond array is Palindrome.\n");
  } else {
    printf("\nSecond array is not Palindrome.\n");
  }
  
  if(is_palindrome(arr3, 5)) {
    printf("\nThird array is Palindrome.\n");
  } else {
    printf("\nThird array is not Palindrome.\n");
  }
  return 0;
}

int is_palindrome(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    if(arr[i] != arr[size - 1 - i]) {
      return 0;
    }
  }
  return 1;
}