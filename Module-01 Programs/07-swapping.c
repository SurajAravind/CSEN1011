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
    int a=3, b=4;
    
    printf("Before Swapping\n");
    printf("a=%d  b=%d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swapping\n");
    printf("a=%d  b=%d\n", a, b);   
    return 0;
}

/* Output

Before Swapping
a=3  b=4
After Swapping
a=4  b=3

Learnings
01. Swapping with and without tempoarary variable

*/
