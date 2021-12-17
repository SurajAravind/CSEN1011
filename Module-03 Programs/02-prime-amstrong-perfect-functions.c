//This program identifies whether a number is prime, amstrong or perfect using the concept of functions.

# include <stdio.h>
# include <math.h>
# include <stdbool.h>

bool prime(int x){
  for (int i=2; i<=sqrt(x); i++ ){
    if (x % i == 0){
      return false;
    }
  }
  return true;
}

bool amstrong(int x) {
  int temp = x, sum=0, number_of_digits=0, digit;
  while (x != 0){
    x = x/10;
    number_of_digits++;
  }
  x = temp;
  while (x != 0){
    digit = x%10;
    sum = sum + pow(digit, number_of_digits);
    x = x/10;
  }
  if (sum == temp)
    return true;
  else
    return false;
}

bool perfect(int x){
  int sum = 0;
  for (int i=1; i<=x/2; i++){
    if (x%i == 0)
      sum = sum + i;
  }
  if (x == sum)
    return true;
  else
    return false;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Is the number prime ?  %d\n", prime(n));
  printf("Is the number amstrong ?  %d\n", amstrong(n));
  printf("Is the number perfect ?  %d\n", perfect(n));
  return 0;
}

/* Learnings:
01. Functions
02. bool data types */