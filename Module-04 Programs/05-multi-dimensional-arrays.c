# include <stdio.h>
# define ROW 2
# define COL 3
int main(void) {
  //int array_02[3][4] = { {5, 6, 1, 3}, {2, 6,1,7}, {8, 2, 9,3}};
  int matrix_1[ROW][COL];
  int matrix_2[ROW][COL];
  int matrix_3[ROW][COL];

  printf("Enter the elements for matrix_1: ");
  
  for (int row_index = 0; row_index < ROW ; row_index++) 
    for(int col_index = 0; col_index < COL; col_index++ )
       scanf("%d", &matrix_1[row_index][col_index]);
   

  for (int row_index = 0; row_index < ROW ; row_index++) {
    for(int col_index = 0; col_index < COL; col_index++ )
       printf("%d\t", matrix_1[row_index][col_index]);
    printf("\n");
  }

  printf("\nEnter the elements for matrix_2: ");
  
  for (int row_index = 0; row_index < ROW ; row_index++) 
    for(int col_index = 0; col_index < COL; col_index++ )
       scanf("%d", &matrix_2[row_index][col_index]);
   

  for (int row_index = 0; row_index < ROW ; row_index++) {
    for(int col_index = 0; col_index < COL; col_index++ )
       printf("%d\t", matrix_2[row_index][col_index]);
    printf("\n");
  }

  for (int row_index = 0; row_index < ROW ; row_index++) 
      for(int col_index = 0; col_index < COL; col_index++ )
       matrix_3[row_index][col_index] = matrix_1[row_index][col_index] + matrix_2[row_index][col_index];
    
  printf("\nThe sum of the two matrices is ...\n");
  for (int row_index = 0; row_index < ROW ; row_index++) {
    for(int col_index = 0; col_index < COL; col_index++ )
       printf("%d\t", matrix_3[row_index][col_index]);
    printf("\n");
  }
  //printf("\nThe number of bytes occupied by the array is %ld\n", sizeof(array_02));
  return 0;
}