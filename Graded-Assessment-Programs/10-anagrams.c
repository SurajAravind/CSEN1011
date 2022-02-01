/* C Program to find whether two strings are anagrams.  (Anagram is a word formed my rearranging the letters of another word.  For example silent and listen are anagrams)

Complete the missing code.

Hint: Sort the characters in the string and compare */

# include <stdio.h>
# include <string.h>
# define LENGTH 10

int main(void) {
  char s1[LENGTH], s2[LENGTH];
  scanf("%s", s1);  //First string 
  scanf("%s", s2);  //Second string 
    
  // First step is sort the strings
  
  for(int i=0; i<strlen(s1); i++)
    for(int j=0; j<strlen(s1)-i-1; j++)
      if(s1[j] > s1[j+1]){
        char temp = s1[j];
        s1[j]=s1[j+1];
        s1[j+1] = temp;
      }
      
  for(int i=0; i<strlen(s2); i++)
    for(int j=0; j<strlen(s2)-i-1; j++)
      if(s2[j] > s2[j+1]){
        char temp = s2[j];
        s2[j]=s2[j+1];
        s2[j+1] = temp;
      } 
      
   if (strcmp(s1, s2) == 0)
     printf("True");
   else printf("False");
  //Complete the rest of code as per the question asked
  //DONOT MAKE CHANGES TO THE ALREADY GIVEN CODE
  //Output should be True or False

    return 0;
}    

/* Test Cases:	
Test case 1
listen silent
True

Test case 2
evil vile
True

Test case 3
gitam mat
False

Test case 4
fine find
False

Test case 5
funeral realfun
True
*/