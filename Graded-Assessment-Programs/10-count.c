/*Given a string expression, return the count for operators, single character variables and literals

Complete the missing code.

For example given the expression a =b+5  The output should be count operators as 2 (+ and =), variables as 2(a, b) and literals as 1 (5)

Assume no space is given between the variables, literals and operators.

Hint:  ASCII values  [0,9] -> 48 to 57,  [a, z] -> 97 to 122  [A, Z] -> 65 to 90 */


# include <stdio.h>
# include <string.h>
# define LENGTH 10

int main(void) {
  char input[LENGTH];
  int operator_count = 0, variable_count = 0, literal_count = 0;
  scanf("%s", input);  //Input expression
  
  for (int index=0; index<strlen(input); index++) {
    switch(input[index]) {
      case '=':    
      case '+':
      case '-':
      case '*':
      case '/':
      case '%': ++operator_count;
                break;
     }  // switch close
    if (input[index] <= 122 && input[index] >= 65)
      ++variable_count;
    if (input[index] <= 57 && input[index] >= 48)
      ++literal_count;  
  } // for loop close     
  printf("%d %d %d", operator_count, variable_count, literal_count);
  return 0;
}   

/* Test Cases:
Test case 1
a=b+5
2 2 1

Test case 2
c=d
1 2 0

Test case 3
e=f*g-6
3 3 1

Test case 4
Z=X/Y%w
3 4 0

Test case 5
u=v=w
2 3 0  */