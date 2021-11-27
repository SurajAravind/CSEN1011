/* Algorithm
01. Start
02. Accept a two numbers  a and b.

03.One way
1. Take another temp variable.
2. temp = a, a = b and b = temp 

Another way
1. a = a + b, b = a - b and a = a - b

04. Stop */

# include <stdio.h>
int main() {
    int a=10, bit_position=1;
    
    printf("Bit status = %d\n", (a >> bit_position) & 1 );
    
    return 0;
}

/* Output

Bit status = 1

Learnings
01. >> right shift operator
02. << left shift operator 

*/
