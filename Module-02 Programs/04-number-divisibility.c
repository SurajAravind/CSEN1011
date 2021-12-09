/* Program to find whether a number is divisible to 5 and 11 or not.

Algorithm:
01. Start
02. Accept a.
03. If (a % 55 == 0) Display "Divisible by 5 and 11"
05. Else Display "Not Divisible by 5 and 11"
06. Stop  */

# include <stdio.h>
int main() {
  int a;
  
  printf("Enter a number:  " );
  scanf("%d", &a);
  
  if (a % 55 ==0) 
    printf("%d is divisible by 5 and 11\n", a);
    else 
    printf("%d is not divisible by 5 and 11\n", a);
  
  return 0;
}

/* Output

~/CSEN1011-6/Module-02 Programs$ gcc 04-number-divisibility.c 
~/CSEN1011-6/Module-02 Programs$ ./a.out
Enter a number:  500
500 is not divisible by 5 and 11
~/CSEN1011-6/Module-02 Programs$ ./a.out
Enter a number:  10
10 is not divisible by 5 and 11

Learnings:
Simple program but will it word for all positive numbers?
*/

