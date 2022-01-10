/* Binary Search 
*/

# include <stdio.h>
# include <stdlib.h>
# define SIZE 10
int list_of_integers[SIZE];  // Global declaration
int element;  // to be searched

void bubble_sort() {
for(int i=0; i<SIZE; i++)
    for(int j=0; j<SIZE-i-1; j++)
      if(list_of_integers[j] > list_of_integers[j+1]){
        int temp = list_of_integers[j];
        list_of_integers[j]=list_of_integers[j+1];
        list_of_integers[j+1] = temp;
      }
}

int binary_search(int start, int end) {
  int mid = (start + end) / 2;

  if (element == list_of_integers[mid])
    return mid;
  else if (element > list_of_integers[mid])
    return binary_search(end+1, SIZE-1);
  else return binary_search(0, end-1);
}

int main(void){
  
  printf("Integers are chosed randomly");
  for (int i=0; i<SIZE; i++)
    list_of_integers[i] = rand()%10;

  printf("\nThe elements in the list before sorting are ...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
    
  bubble_sort();
    
  printf("\nThe elements in the list after sorting are ...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\nEnter the element to be searched: ");
  scanf("%d", &element);

  printf("Element is found at index %d\n", binary_search(0, SIZE));
  
  return 0;
}

// Needs to be fine tuned