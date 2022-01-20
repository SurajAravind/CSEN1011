# include <stdio.h>
# define ROW 2
# define COL 3

int main(void) {
  
  int matrix_1[ROW][COL];
  int matrix_2[COL][ROW];
  
  printf("Enter the elements for matrix_1 (2 X 3): ");
  
  for (int row_index = 0; row_index < ROW ; row_index++) 
    for(int col_index = 0; col_index < COL; col_index++ )
       scanf("%d", &matrix_1[row_index][col_index]);
   

  for (int row_index = 0; row_index < ROW ; row_index++) 
    for(int col_index = 0; col_index < COL; col_index++ )
       matrix_2[col_index][row_index]=matrix_1[row_index][col_index];
    
  
  printf("\nElements of original matrix...\n ");
  
  for (int row_index = 0; row_index < ROW ; row_index++) {
    for(int col_index = 0; col_index < COL; col_index++ )
       printf("%d\t", matrix_1[row_index][col_index]);
    printf("\n");
  }
  
  printf("\nElements of transpose matrix...\n ");
  
  for (int row_index = 0; row_index < COL ; row_index++) {
    for(int col_index = 0; col_index < ROW; col_index++ )
       printf("%d\t", matrix_2[row_index][col_index]);
    printf("\n");
  }
 
  return 0;
}

/* OUTPUT:
Enter the elements for matrix_1: 1 2 3 4 5 6

Elements of original matrix...
 1  2   3
4   5   6

Elements of transpose matrix...
 1  4
2   5
3   6 */