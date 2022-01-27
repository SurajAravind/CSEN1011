//# include <stdio.h>
//# include <stdlib.h>
# define LENGTH 10
int main(void) {
  char ch;
  /*char string_01[LENGTH];
  printf("Enter atleast 10 characters for the string: ");
  
/*  for (int i=0; i<LENGTH; i++)
    scanf("%c", &string_01[i]);
  printf("The string entered is:  ");
  for (int i=0; i<LENGTH; i++)
    printf("%c", string_01[i]);
  printf("\n");

  scanf("%s", string_01);
  printf("The string entered is:  %s\n", string_01);

  gets(string_01);
  printf("The string entered is:");
  puts(string_01); */
  printf("Enter a character: ");
  ch = getchar();
  printf("The entered character is: ");
  putchar(ch);
  return 0;
}