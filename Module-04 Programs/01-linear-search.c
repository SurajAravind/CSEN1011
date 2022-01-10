/* Linear Search 
Array - collection of homogeneous data items
*/

# include <stdio.h>
int main(void){
  int list_of_integers[5];  // Array declaration
  int element;
  printf("Enter 5 integers: ");
  
  for (int i=0; i<5; i++)
    scanf("%d", &list_of_integers[i]);

  printf("\nThe elements in the list are ...");
  for (int i=0; i<5; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\nEnter the element to be searched: ");
  scanf("%d", &element);

  for (int i=0; i<5; i++)
    if (element == list_of_integers[i]) {
      printf("\nThe element is found at index %d\n", i);
      return 0;
    }

  printf("\nThe element is not found\n");
  return 0;
}