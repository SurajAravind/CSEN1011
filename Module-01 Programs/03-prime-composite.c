/* Algorithm
01. Start
02. Accept a number 'n' to find whether it is prime or composite.
03. Initialize a counter to value 2
04. Divide the number n with counter, if reminder is 0 then print "Composite" and exit from the algorithm
05. Else increment the counter and repeat from step 04 till the counter value is (n-1).
06. If the algorithm reaches this step it means there are no divisors and hence print "Prime"
07. Stop */

# include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int counter=2; counter < n; counter++) {
        if (n % counter == 0) {
            printf("Composite");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}

/* Learnings
01. Use of for loop in C
*/
