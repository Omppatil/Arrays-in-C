#include <stdio.h>
int main(void) {
int arr[10];

printf("Welcome to Max and Min of Array.\n");
for(int i = 0; i < 10; i++) {
  printf("please enter the %dth array number: ", i + 1);
  scanf("%d", &arr[i]);
}
  int max = arr[0];
  int min = arr[0];
  
  for(int i = 1; i < 10; i++) {
    if(max < arr[i]) {
      max = arr[i];
    }

    if(min > arr[i]) {
      min = arr[i];
    }
}
  printf("Max: %d and Min: %d", max, min);
  return 0;
}