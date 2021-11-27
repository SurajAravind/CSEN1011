/* Algorithm
01. Start
02. Accept two numbers number_01 and divisor.
03. Reminder can be calculated as number_01 - divisor(number/divisor)
04. Stop */

# include <stdio.h>
int main() {
    int number_01, divisor;
    
    printf("Enter an integer : ");
    scanf("%d", &number_01);

    printf("Enter divisor : ");
    scanf("%d", &divisor);

    printf("Reminder = %d\n", number_01 - divisor * (number_01/divisor));
    
    return 0;
}

/* Output
Enter an integer : 100
Enter divisor : 7
Reminder = 2

~/CSEN1011-3/Module-01 Programs$ ./a.out
Enter an integer : 9
Enter divisor : 3
Reminder = 0

~/CSEN1011-3/Module-01 Programs$ ./a.out
Enter an integer : 100
Enter divisor : 3
Reminder = 1

Learnings
01. Took advantage of integer division.
*/
