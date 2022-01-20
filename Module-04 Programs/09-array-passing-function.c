# include <stdio.h>
# define SIZE 4

void sample_function(int a[]){
  printf("\nThe value of a is %u\n", a);
  printf("The elements of the array a are ...\n");
  for (int index=0; index < SIZE; index ++)
    printf("%d\t", a[index]);
}

int main(void) {
  int array_01[SIZE] = {11, 22, 33, 44};
  printf("The address of array_01 is %u\n", array_01);
  sample_function(array_01);
  printf("\n");
  return 0;
}

/*Observation-  The address of the array is passed to the function */