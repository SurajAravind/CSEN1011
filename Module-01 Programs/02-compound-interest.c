/* Algorithm

01. Start
02. Accept Principle (p), Rate of interest (r), Time period(t)
03. Display Compound Interest after evaluating p(1 + r/100) power t 
04. Stop */

# include <stdio.h>
# include <math.h>
int main() {
  int p, t, r;
    
  printf("Principle = " );
  scanf("%d", &p);

  printf("Rate of Interest = " );
  scanf("%d", &r);

  printf("Time period = " );
  scanf("%d", &t);

  printf("Compound Interest = %f \n", p - p * pow((1 + r/100), t) );

  return 0;
}



/* Learnings:
01. There is no operator in C for performing exponential operation
02. Tried to use pow() by including math.h.  But giving error in repl but working fine in standlone c compiler.
 */