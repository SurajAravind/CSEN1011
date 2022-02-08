/* Concept of files
1. Reading from a file
2. Writing to a file */

# include <stdio.h>
int main(void) {
  FILE *fptr;
  char input[15];
  fptr = fopen("sample.txt", "w");
  char output[15] = "abcdefghijkl";
  fputs(output, fptr);
  //printf("The contents of the file are:  %s\n", input);
  fclose(fptr);
  fptr = fopen("sample.txt", "r");
  fgets(input, 15, fptr);
  printf("The contents of the file are : %s", input);
  fclose(fptr);
  return 0;
}