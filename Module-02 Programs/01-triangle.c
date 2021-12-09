/* Program to find whether a triangle is equilateral, isosceles or scalene.

Algorithm:
01. Start
02. Accept the three angles a, b and c of a triangle.
03. If (a + b + c != 180) Display "Invalid Angles"
04. Else if (a==b==c) Display "Equilateral"
05. Else if (a==b or b==c or c==a) Display "Isosceles"
06. Else Display "Scalene"
07. Stop  */

# include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the angles of a triangle (in degrees):\n" );
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  if (a + b + c != 180) 
    printf("Invalid Angles\n");
  else if (a == b && b == c)
    printf("Equilateral Triangle\n");
  else if (a==b || b==c || c==a)
    printf("Isoseles\n");
  else 
    printf("Scalene\n");
  return 0;
}

/* Output

~/CSEN1011-5/Module-02 Programs$ gcc 01-triangle.c 
~/CSEN1011-5/Module-02 Programs$ ./a.out
Case 1
Enter the angles of a triangle (in degrees):
a = 12
b = 67
c = 23
Invalid Angles

Case 2
Enter the angles of a triangle (in degrees):
a = 60
b = 60
c = 60
Equilateral Triangle

Case 3
Enter the angles of a triangle (in degrees):
a = 45
b = 45
c = 90
Isoseles

Case 4
Enter the angles of a triangle (in degrees):
a = 60
b = 50
c = 70
Scalene

Learnings:
Nested if else statements.
*/

