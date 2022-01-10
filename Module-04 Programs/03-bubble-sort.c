/* Bubble Sort 
*/

# include <stdio.h>
# include <stdlib.h>
# define SIZE 10
int main(void){
  int list_of_integers[SIZE];  // Array declaration
  
  printf("Integers are chosed randomly");
  for (int i=0; i<SIZE; i++)
    list_of_integers[i] = rand()%10;

  printf("\nThe elements in the list before sorting are ...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
    
  
  for(int i=0; i<SIZE; i++)
    for(int j=0; j<SIZE-i-1; j++)
      if(list_of_integers[j] > list_of_integers[j+1]){
        int temp = list_of_integers[j];
        list_of_integers[j]=list_of_integers[j+1];
        list_of_integers[j+1] = temp;
      }
  
  printf("\nThe elements in the list after sorting are ...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\n");
  return 0;
}