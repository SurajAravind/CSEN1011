# include <stdio.h>

int main(void) {
  FILE *fptr;
  int word_count, letter_count,line_count;
  word_count = letter_count = line_count = 0;
  char ch;
  fptr = fopen("sample.txt", "r");
  while ( (ch=fgetc(fptr)) != EOF){   //EOF stands for End Of File
    switch (ch) {
      case '\n': ++line_count;
                 ++ word_count;
                 break;
      case ' ': ++ word_count;
                 break;
      default : ++ letter_count;
    }

  }
 
  printf("\nNumber of letters = %d Number of words = %d  Number of lines = %d", letter_count, word_count, line_count);
  fclose(fptr);
  return 0;
}