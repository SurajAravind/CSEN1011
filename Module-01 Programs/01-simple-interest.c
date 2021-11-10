/* Algorithm

01. Start
02. Accept Principle (p), Rate of interest (r), Time period(t)
03. Display Simple Interest after evaluating p * t * r / 100
04. Stop */

# include <stdio.h>
int main() {
  int p, t, r;
  
  printf("Principle = " );
  scanf("%d", &p);

  printf("Rate of Interest = " );
  scanf("%d", &r);

  printf("Time period = " );
  scanf("%d", &t);

  printf("Simple Interest = %d \n", (p * t * r / 100) );

  return 0;
}


/* Output:
Run - 1
Principle = 100
Rate of Interest = 2
Time period = 2
Simple Interest = 4~/CSEN1011-2/Module-01 Programs$ gcc 01-simple-interest.c

Run - 2
~/CSEN1011-2/Module-01 Programs$ ./a.out
Principle = 200
Rate of Interest = 3
Time period = 4
Simple Interest = 24 

Run - 3
~/CSEN1011-2/Module-01 Programs$ ./a.out
Principle = 69
Rate of Interest = 2
Time period = 2
Simple Interest = 2 */

// Observations - How to display float values?

/* Learnings:
01. printf, scanf, format specifiers, address operator, new line operator */