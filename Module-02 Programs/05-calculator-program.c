/* Simple calculator Program in C.

Algorithm:
01. Start
02. Accept a, b (integers) amd an op (operator)  .
03. Based on the operator use switch case
04. Stop  */

# include <stdio.h>
int main() {
  int a, b;
  char op;
  
  printf("Enter two numbers (a:b) :" );
  scanf("%d:%d", &a, &b);
  
  printf("Enter an operator +, -, *, /" );
  scanf("%c", &op);
    
  switch (op) {
    case '+': printf("%d", a + b);
              break;
    case '-': printf("%d", a - b);
              break;
    case '*': printf("%d", a * b);
              break;
    case '/': printf("%d", a / b);
              break;
    case '%': printf("%d", a % b);
              break;
    default: printf("Inalid operator");
  }

  return 0;
}

/* Output

~/CSEN1011-6/Module-02 Programs$ gcc 05-calculator-program.c 
~/CSEN1011-6/Module-02 Programs$ ./a.out
Enter two numbers (a:b) :4:8
Enter an operator +, -, *, /

Learnings:
Not working properly.  May be flush needs to be implmented.
*/

