/* Write a C program for the following problem.
For a given array  of sorted integers,  find the ceiling of a number n in the array.
If the ceiling number is not there, output the last element of the sorted list.
If the number n is already in the sorted list, output the number itself.
For example consider the sorted array as [12, 30, 43, 65, 74, 81, 96]
If n = 15, output should be 30 
If n = 97, output should be 96
if n = 65, output should be 65 */

# include <stdio.h>
# define SIZE 10
int main() {
  int sorted_array[SIZE];
  int n, terms, i=0;
  
  printf("Ënter the number of terms in the array: ");
  scanf("%d", &terms);

  printf("Enter the numbers: ");
  for(i=0; i<terms; i++)
    scanf("%d", &sorted_array[i]);
  
  printf("Enter the number to find its ceiling: ");
  scanf("%d",&n);

  for (i=0;i<terms; i++){
    if (n <= sorted_array[i]){
        printf("The ceiling of the given number is %d\n", sorted_array[i]);
        return 0;
    }
  }      
  
  printf("The ceiling of the given number is %d\n", sorted_array[i-1]);
  return 0;
}

/* output:

Case - 01

Ënter the number of terms in the array: 7
12 30 43 65 74 81 96
Enter the number to find its ceiling: 15
30

Case - 02

Ënter the number of terms in the array: 7
Enter the numbers: 12 30 43 65 74 81 96
Enter the number to find its ceiling: 97
The ceiling of the given number is 96

Case - 03

Ënter the number of terms in the array: 7
Enter the numbers: 12 30 43 65 74 81 96
Enter the number to find its ceiling: 65
The ceiling of the given number is 65
*/


/* Learnings:
01. Can I use a common logic to find ceil and floor of a number in the array? */