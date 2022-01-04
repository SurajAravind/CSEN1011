/*Develop a C program to covert upper-case character to a lower-case character and vice versa.

It should display a message "Incorrect data" if a non-character is given as input.

Example - If Input is 'a' then Output should be 'A'.

If Input is 'Z' then Output should be 'z'.

If input is '1' then Output should be "Incorrect data". */

/* Algorithm

01 Start
02. Accept a character 'ch' as input.
03. If 'ch' is not an alphabet Display "Incorrect Data". 
Else if 'ch' is lower case character then subtract 32 from the ASCII value of 'ch' Display 'ch'.
Else add 32 to ASCII value of 'ch' and Display 'ch'
04. Stop  */

# include <stdio.h>

int main(void){
  char ch;
  printf("Enter a character: ");
  ch = getchar();
  if ( (ch <= 122) && (ch >= 97))
    ch -= 32;
  else if ( (ch <= 90) && (ch >= 65))
    ch += 32;
  else {
    printf("Incorrect Data\n");
    return 0;
  }
  printf("Changed case is %c\n", ch);
  return 0;
}

/* Output:

Enter a character: 9
Incorrect Data

Enter a character: a
Changed case is A

Enter a character: O
Changed case is o  */

/* Learnings:
01. ASCII values (American Standard Code for Information Interchange)
02. getchar() */