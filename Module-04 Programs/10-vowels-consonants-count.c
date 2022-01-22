# include <stdio.h>
# include <stdlib.h>
int main(void) {
  int n;
  printf("Enter how many characters in the string: ");
  scanf("%d", &n);
  char *str = (char *)malloc(n * sizeof(char));
  printf("Enter the string (of size %d) : ", n);
  scanf("%s", str);
  printf("\nThe string taken is %s\n", str);

  int vowel_count = 0, consonant_count = 0;
  for (int index=0; index<n; index++) 
    switch(str[index]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': ++vowel_count;
                break;
      default: ++consonant_count;
    }
  
  printf("In the given string the number of vowels = %d and consonants = %d", vowel_count, consonant_count);
  return 0;
}

/* Output:
Enter how many characters in the string: 5
Enter the string (of size 5) : abcde 
The string taken is abcde
In the given string the number of vowels = 2 and consonants = 3 */