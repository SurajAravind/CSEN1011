/* Algorithm
01. Start
02. Accept marks for 5 subjects.
03. Find total, average.
04. Stop */

# include <stdio.h>
int main() {
    int marks_01, marks_02, marks_03, marks_04, marks_05;
    
    printf("Enter marks_01 : ");
    scanf("%d", &marks_01);

    printf("Enter marks_02 : ");
    scanf("%d", &marks_02);

    printf("Enter marks_03 : ");
    scanf("%d", &marks_03);

    printf("Enter marks_04 : ");
    scanf("%d", &marks_04);

    printf("Enter marks_05 : ");
    scanf("%d", &marks_05);

    int total_marks = marks_01 + marks_02 + marks_03 + marks_04 + marks_05;
    
    printf("Total Marks scored = %d\n", total_marks );
    printf("Average Marks scored = %d\n", total_marks/5 );

    return 0;
}

/* Output
Enter marks_01 : 23
Enter marks_02 : 89
Enter marks_03 : 12
Enter marks_04 : 67
Enter marks_05 : 45
Total Marks scored = 236
Average Marks scored = 47

Learnings
01. Do we need to declare all variables having a similar functionallity?  Arrays is a better way.
*/
