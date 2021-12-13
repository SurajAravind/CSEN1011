// C program to find roots of a quadratic expression of the form ax^2 + bx + c = 0

# include <stdio.h>
# include <math.h>
int main() {
  int a, b, c;
  printf("Enter valid values for a, b and C...\n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  int determinant = b*b - 4*a*c;
  
  if (determinant == 0)
    printf("The expression has equal roots : %d\n", -b/(2*a));
  else if (determinant < 0)
    printf("The expression has imaginary roots\n");
  else {
    float temp = sqrt(determinant);
    printf("Root1 = %f\n", (-b + temp)/(2*a) );
    printf("Root2 = %f\n", (-b - temp)/(2*a) );
  }
}

/* Ouput
This program works fine in Online C compiler.  sqrt() function is not recognized here inspite of includeing math.h */