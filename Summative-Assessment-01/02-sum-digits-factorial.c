/* Develop a C program to find the sum of digits of factorial of a number.  If the given number is more than 10, it should display "Too big a number".  If the number is negative, it should display "Negative Number". */

/* Algorithm
01. Start
02. Accep a number 'n'.
03. If the n > 10 Display "Too big a number" and Stop
    Else if n < 0 Display "Negative Number" and Stop
    Else go to Step-04.
04. Repeat the steps 05 & 06 until ( n < 0 ).  Initialize fact to 1.
05. fact = fact * n 
06. Decrement n.
07. Repeat the steps 08 & 09 until (fact < 0). Initialize sum to 0
08. sum = sum + fact % 10.
09. fact = fact / 10
10. Display sum.
11. Stop. */

# include <stdio.h>
int main(void) {
  int n, fact = 1, sum = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n > 10)
    printf("Too big a number\n");
  else if (n < 0)
    printf("Negative number\n");
  else {
    while (n > 0) 
      fact *= n--;
    printf("Factorial of the given number is %d\n", fact);
    while (fact > 0) {
      sum += (fact % 10);
      fact /= 10;
    }
    printf("Sum of the digits is %d\n", sum);
  }
  return 0;
}

/* Output:
Enter an integer: -3
Negative number

Enter an integer: 15
Too big a number

Enter an integer: 5
Factorial of the given number is 120
Sum of the digits is 3


Enter an integer: 0
Factorial of the given number is 1
Sum of the digits is 1  */

/* Learnings:
01. Post Decrement
02. Compound operators */
