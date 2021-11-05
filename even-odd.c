#include <stdio.h>

int main(void) {
  int n;  // Number to know where it is even or odd
  printf("Enter a number to find whether it is even or odd: ");
  scanf("%d", &n);
  if (n%2 == 0)
    printf("The number is even");
  else
    printf("The number is odd");
  return 0;
}
