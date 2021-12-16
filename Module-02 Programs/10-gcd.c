/* Program to find Greatest Common Divisor (gcd) of two numbers 

Euclidean Algorithm:
01. Start
02. Accept two numbers a and b.
03. See that a > b.  If not interchange them.
05. If a % b == 0 then print b is the gcd
06. Else r = a % b, a = b and b = r  and goto step 05
07. End */

# include <stdio.h>
int main() {
  int a, b, temp;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  if (a < b) {
    //swap a and b
    temp = a;
    a = b;
    b = temp;

  }
  while (a % b != 0){
    temp = a % b;
    a = b;
    b = temp;
  }
  printf("The GCD of the two numbers is %d\n", b);
  return 0;
}

/* Output

Enter a : 100
Enter b : 3
The GCD of the two numbers is 1
Enter a : 3
Enter b : 100
The GCD of the two numbers is 1

Learnings:
01. Can we use the same algorithm for finding GCD of mor e than 2 numbers? */

