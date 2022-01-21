# include <stdio.h>
# define ROW_1 2
# define COL_1 3
# define ROW_2 3
# define COL_2 2

int main(void) {
  
  int matrix_1[ROW_1[COL_1]];
  int matrix_2[ROW_2][COL_2];
  int matrix_3[ROW_1][COL_2];
  
  printf("Enter the elements for matrix_1 (2X3): ");
  
  for (int row_index = 0; row_index < ROW_1 ; row_index++) 
    for(int col_index = 0; col_index < COL_1; col_index++ )
       scanf("%d", &matrix_1[row_index][col_index]);
   
  printf("\nEnter the elements for matrix_2 (3X2): ");
  
  for (int row_index = 0; row_index < ROW_2 ; row_index++) 
    for(int col_index = 0; col_index < COL_2; col_index++ )
       scanf("%d", &matrix_2[row_index][col_index]);
   

  for (int row_index = 0; row_index < ROW_1 ; row_index++) 
      for(int col_index = 0; col_index < COL_2; col_index++ ) {
        matrix_3[row_index][col_index] = 0;
        for(int k=0; k < COL_1; k++)
          matrix_3[row_index][col_index] += matrix_1[row_index][k]*matrix_2[k][col_index] ;
      }
       
  printf("\nElements of Matrix_1...\n");
  for (int row_index = 0; row_index < ROW_1 ; row_index++) {
    for(int col_index = 0; col_index < COL_1; col_index++ )
       printf("%d\t", matrix_1[row_index][col_index]);
    printf("\n");
  }  

  printf("\nElements of Matrix_2...\n");
  for (int row_index = 0; row_index < ROW_2 ; row_index++) {
    for(int col_index = 0; col_index < COL_2; col_index++ )
       printf("%d\t", matrix_2[row_index][col_index]);
    printf("\n");
  }
  printf("\nMultiplication of the two matrices is ...\n");
  for (int row_index = 0; row_index < ROW_1 ; row_index++) {
    for(int col_index = 0; col_index < COL_2; col_index++ )
       printf("%d\t", matrix_3[row_index][col_index]);
    printf("\n");
  }
  return 0;
}

/* OUTPUT
Enter the elements for matrix_1 (2X3): 1 2 3 4 5 6

Enter the elements for matrix_2 (3X2): 1 2 3 4 5 6

Elements of Matrix_1...
1   2   3
4   5   6

Elements of Matrix_2...
1   2
3   4
5   6

Multiplication of the two matrices is ...
22  28
49  64  */