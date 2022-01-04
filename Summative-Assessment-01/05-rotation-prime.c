/*Given an integer n, return whether every rotation of n is prime.
Example 1:
Input: n=199
Output: True
Explanation:
199 is prime, 919 is prime, and 991 is prime.

Example 2:
Input: n = 19
Output: False
Explanation:
Although 19 is prime, 91 is not. */

/*Algorithm
01. Start
02. Accept an integer 'n'
03. Count the number of digits in n (counter).
04. Repeat the following counter times.
05. If n is composite display "False" and stop
    Else digit = n%10, n1 = n/10, n = n1 + digit *power(10, counter) 
06. If we reached this step it means all numbers are prime.
07. Display "True".
08. Stop. */

# include <stdio.h>
# include <math.h>
int main(void){
  int n, number_of_digits=0, temp;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  temp = n;

  while (temp != 0){
    ++number_of_digits;
    temp /=10;
  }

  printf("number of digits = %d\n", number_of_digits);

  for (int i = 1; i<=number_of_digits; i++) {
    
    for (int j=2; j<=n/2; j++) {
      if (n%j == 0) {
        printf("False\n");
        return 0;
      }
    }
    temp = n % 10;
    n /= 10;
    n += temp * pow(10, number_of_digits-1);  
    printf("Value of n = %d\n", n);
  }
  printf("True\n");
  return 0;
}

/* Output:
Enter a positive integer: 19
number of digits = 2
Value of n = 91
False

Enter a positive integer: 199
number of digits = 3
Value of n = 919
Value of n = 991
Value of n = 199
True */