/* There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. 
1. malloc()
2. calloc()
3. free()
4. realloc()  */

# include <stdio.h>
# include <stdlib.h>
int main(){
  
  int *ptr; 
  int n;
  printf("Enter the number of integers U want: ");
  scanf("%d", &n);

  /*ptr = malloc(n * sizeof(*ptr));
  //printf("Number of bytes occupied by the integer pointer = %d", sizeof(*ptr));
  //printf("\n Number of bytes allocated by the malloc function = %d", sizeof(ptr));  Needs to be explored


  printf("Enter %d integers ...", n);
  for (int index=0; index < n; index ++)
      scanf("%d", (ptr + index)); 
  printf("\nThe numbers entered are ...");
  for (int index=0; index < n; index ++)
    printf("%d\t",*(ptr + index));
   printf("\n"); 
   */

   // calloc 

  ptr = (int *) calloc(n, sizeof(int));
  // Initalize all integers to Zero
  for (int index=0; index < n; index ++)
    printf("%d\t",*(ptr + index));
  printf("\n"); 

  printf("\nEnter new size of the memory block: ");
  scanf("%d", &n);
  ptr = realloc(ptr, n);

  for (int index=0; index < n; index ++)
    printf("%d\t",*(ptr + index));
  printf("\n"); 

  free(ptr);  //frees up the memory space 
  return 0;   
}