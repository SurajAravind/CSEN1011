/* Program to find minimum among three numbers.

Algorithm:
01. Start
02. Accept three numbers a, b, c.
03. If (a < b and b < c) Display "Smallest a"
04. Else if ( a > b and b > c) Display "Smallest c"
05. Else Display "Smallest b"
06. Stop  */

# include <stdio.h>
int main() {
  int a, b, c;
  
  printf("Enter three numbers (a:b:c) :  " );
  scanf("%d:%d:%d", &a, &b, &c);
  
  if (a < b && b < c) 
    printf("Smallest  is %d\n", a);
  else if (a > b && b > c)
    printf("Smallest  is %d\n", c);
  else 
    printf("Smallest  is %d\n", b);
  
  return 0;
}

/* Output

~/CSEN1011-6/Module-02 Programs$ gcc 03-minimum-number.c 
~/CSEN1011-6/Module-02 Programs$ ./a.out
Enter three numbers (a:b:c) :  1:2:3
Smallest  is 1
~/CSEN1011-6/Module-02 Programs$ ./a.out
Enter three numbers (a:b:c) :  3:2:1
Smallest  is 1
~/CSEN1011-6/Module-02 Programs$ ./a.out
Enter three numbers (a:b:c) :  1:3:2
Smallest  is 3


Learnings:
What is wrong with the logic?
*/

