//Sum of series 1 - x^2/factorial(2) + x^4/factorial(4) - ...
// This solution is done with and without functions.


//Without using userdefined functions
/*# include <stdio.h>
# include <math.h>
int main() {
  int n, x, fact = 1, sign = -1;
  double sum=1;
  printf("Enter the values of n and x of the series\n");
  printf("x = ");
  scanf("%d", &x);
  printf("n = ");
  scanf("%d", &n);

  for (int i=1; i<=n-1; i++) {
    fact = 1;
    for(int j=1; j<=2*i; j++) {
      fact = fact * j;
    }
    sign = pow(-1, i);
    sum = sum + (sign)*pow(x, i*2)/fact;
  }
  printf("Sum of the series = %f\n", sum);
  return 0;
}*/

/*Output:
Enter the values of n and x of the series
x = 2
n = 3
Sum of the series = -0.333333

Test for other values

Learnings:
Add –lm linker flag with compilation command to work with pow().
eg gcc 01-series-sum.c -lm */

//Using userdefined functions

# include <stdio.h>

int power_function(int m, int n){
  int output=1;
  for (int i=1; i<=n; i++){
    output = output * m;
  }
  return output;
}

int factorial_function(int k){
  int fact = 1;
  for (int i=1; i<=k; i++){
    fact = fact * i;
  }
  return fact;
}

int main() {
  int n, x, sign = -1;
  double sum=1;
  printf("Enter the values of n and x of the series\n");
  printf("x = ");
  scanf("%d", &x);
  printf("n = ");
  scanf("%d", &n);

  for (int i=1; i<=n-1; i++) {
    sign = power_function(-1, i);
    sum = sum + (sign)*power_function(x, i*2)/factorial_function(i*2);
  }
  printf("Sum of the series = %f\n", sum);
  return 0;
}  

/*output:
Test whether this is correct.  If not fix the program.
*/