// Print patterns using *
# include <stdio.h>
int main() {
  int n;
  printf("Enter how many lines of '*' to be printed: ");
  scanf("%d", &n);
  for (int i = 1; i<=n; i++){
    for (int j=1;j<=i; j++ ){
      printf("*");
    }
    printf("\n");
  }
}

/* Output:
Enter how many lines of '*' to be printed: 5
*
**
***
****
*****

Learnings: Nested for loop */