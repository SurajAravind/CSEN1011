/*Given a string, return the string with the first and second half swapped.  If the string has odd length, leave the middle character in place. */


# include <stdio.h>
# include <string.h>
# define LENGTH 15

int main(void) {
  char input[LENGTH], output[LENGTH];
  scanf("%s", input);  //Input string 
  int length = strlen(input);
  int i;
  
  for (i=0; i<length; i++) {
  if (length % 2 == 0) {
      if (i < length/2)
          output[length/2+i] = input[i] ;
      else 
          output[i-length/2] = input[i] ;
  }
   
  else {
     if (i < length/2)
          output[length/2+i+1] = input[i] ;
      else if (i == length/2)
           output[i] = input[i];
           else
               output[i-1-length/2] = input[i] ;
      }
  
      
  
  }  // end of for loop
  output[i] = '\0';
  
  printf("%s", output);
  return 0;
}

/* Test Cases

Test case 1
GITAM
AMTGI

Test case 2
visakhapatnam
patnamavisakh

Test case 3
prince
ncepri

Test case 4
COMPUTER
UTERCOMP

Test case 5
science
nceesci */