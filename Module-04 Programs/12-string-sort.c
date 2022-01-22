# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define ROW 5
# define COL 10
int main(void) {
  char array_string[ROW][COL] = {"raju", "rajesh", "akram", "bhaibav", "eswar"};
  printf("\nThe names before sorting ...\n");
  for (int index = 0; index < ROW-1; index++)
    printf("%s\n", array_string[index]);

  for (int outer_index = 0; outer_index < ROW; outer_index++)
    for (int inner_index = 0; inner_index < ROW-1-outer_index; inner_index++)
      if ( strcmp(array_string[inner_index], array_string[inner_index+1]) > 0) {
        char temp[COL];
        strcpy(temp, array_string[inner_index]);
        strcpy(array_string[inner_index], array_string[inner_index+1]);
        strcpy(array_string[inner_index+1], temp);
     }
      
  printf("\nThe names after dictionary sorting ...\n");
  for (int index = 0; index < ROW; index++)
    printf("%s\n", array_string[index]);

  return 0;
}