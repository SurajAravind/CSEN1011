/* POINTERS

In C Language pointer is a variable representing the location of an item.

Let 'a' be variable.  The compiler will allocate some memory for this variable.  The address of 'a' can be determined by '&' address operator.

*/

# include <stdio.h>
int main() {
  int a = 5;
  printf("Address of a is %u\n", &a);
  printf("Value of a is %d\n", a);

  int *a_ptr = &a;
  //printf("Address of a is %u\n", &a);
  
  //printf("Value of a is %d\n", a);
  
  printf("Data in a_ptr is %u\n", a_ptr);
  printf("Value pointed by a_ptr is %d\n", *a_ptr);

  /*float f=7.2;
  a_ptr = &f;
  printf("Data in a_ptr is %d\n", a_ptr);
  printf("Value pointed by a_ptr is %d\n", *a_ptr); */
}