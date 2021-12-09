/* Program to find whether an Year is leap or not.

Algorithm:
01. Start
02. Accept year.
03. If (year % 400 == 0) Display "Leap Year"
04. Else if (year % 100 == 0) Display "Not Leap Yaer"
05. Else if (year % 4 == 0) Display "Leap Year"
06. Else Display "Not Leap Year"
07. Stop  */

# include <stdio.h>
int main() {
  int year;
  
  printf("Enter year: " );
  scanf("%d", &year);
  
  if (year % 400 == 0) 
    printf("Leap Year\n");
  else if (year % 100 == 0)
    printf("Not Leap Year\n");
  else if (year % 4 == 0)
    printf("Leap Year\n");
  else 
    printf("Not Leap Year\n");
  return 0;
}

/* Output

~/CSEN1011-5/Module-02 Programs$ gcc 02-leap-yaer.c 
~/CSEN1011-5/Module-02 Programs$ ./a.out
Enter year: 1996
Leap Year

~/CSEN1011-5/Module-02 Programs$ ./a.out
Enter year: 1900
Not Leap Year

~/CSEN1011-5/Module-02 Programs$ ./a.out
Enter year: 2000 
Leap Year

Learnings:
Nested if else statements
*/

