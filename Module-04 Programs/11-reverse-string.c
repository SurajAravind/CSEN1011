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

  char *reverse_str = (char *)malloc(n * sizeof(char));
  
  for (int index=0; index<n; index++) 
    reverse_str[n-index-1] = str[index];
  
  printf("\nThe reverse string taken is %s\n", reverse_str);
  return 0;
}

/* Output:
Enter how many characters in the string: 7
Enter the string (of size 7) : aravind
The string taken is aravind
The reverse string taken is dnivara  */
