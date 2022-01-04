/* Given a positive integer n, find the length of its Collatz sequence.

The Collatz sequence is generated sequentially where
n = n / 2 if n is even
n = 3 * n + 1 if n is odd

The sequence ends when n = 1

For example when n = 12, the Collatz sequence is [12, 6, 3, 10, 5, 16, 8, 4, 2, 1]

The length of the sequence is 10 */

/* Algorithm:
01. Start
02. Accept 'n'.
03. Repeat the steps until n == 1.
04. If n is even then n = n/2
    Else n i= 3*n + 1
05. Make a count of how many times the loop is repeated.
06. Display count.
07. Stop. */

# include <stdio.h>
int main(void) {
  int n, count = 0;
  printf("Accept a positive integer: ");
  scanf("%d", &n);
  do {
    count++;
    if (n%2 == 0)
      n /= 2;
    else
      n = (3*n) + 1;
  } while(n != 1);
  printf("Number of terms in the collatz sequence is %d\n", count+1);
  return 0;
}

/* Output
Accept a positive integer: 12
Number of terms in the collatz sequence is 10

Accept a positive integer: 6
Number of terms in the collatz sequence is 9

Accept a positive integer: 11
Number of terms in the collatz sequence is 15

Accept a positive integer: 1
Number of terms in the collatz sequence is 4

Accept a positive integer: 19
Number of terms in the collatz sequence is 21  */

/* Learnings:
01. Do while loop */