/* Program to discuss the concept of call by value and call by reference */

# include <stdio.h>

void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
  printf("\nInside swap function x = %d, y = %d", x, y);
}

void swap_ref(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 3, b = 8;
  printf("Before Swapping ...\n a = %d, b = %d", a, b);
  swap(a, b);  // Call by value
  printf("\nAfter Swapping ...\n a = %d, b = %d", a, b);
  swap_ref(&a, &b);
  printf("\nAfter calling swap_ref function ...\n a = %d, b = %d\n", a, b);
  return 0;
}

/* Output

tBefore Swapping ...
 a = 3, b = 8
Inside swap function x = 8, y = 3
After Swapping ...
 a = 3, b = 8
After calling swap_ref function ...
 a = 8, b = 3

 Learnings:
 Call by Value and call by reference
 */