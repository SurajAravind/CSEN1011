/* Linear Search 
Array - collection of homogeneous data items
*/

# include <stdio.h>
# define SIZE 10
int main(void){
  int list_of_integers[SIZE];  // Array declaration
  int element;  //search
  printf("Enter 5 integers: ");
  
  for (int i=0; i<SIZE; i++)
    scanf("%d", &list_of_integers[i]);

  printf("\nThe elements in the list are ...");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\nEnter the element to be searched: ");
  scanf("%d", &element);

  for (int i=0; i<SIZE; i++)
    if (element == list_of_integers[i]) {
      printf("\nThe element is found at index %d\n", i);
      return 0;
    }

  printf("\nThe element is not found\n");
  return 0;
}

/* output
Enter 5 integers: 7 5 3 8 9
The elements in the list are ...7   5   3   8   9
Enter the element to be searched: 3
The element is found at index 2

Enter 5 integers: 6 3 8 1 0
The elements in the list are ...6   3   8   1   0
Enter the element to be searched: 9
The element is not found */

/* Learnings:
01. About arrays
02. Declaration, accessing of elements in the arrays
03. Searching for an element in the array */


