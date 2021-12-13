// Print patterns using numbers
# include <stdio.h>
int main() {
  int n;
  int x=1;
    printf("Enter how many lines of numbers to be printed: ");
  scanf("%d", &n);
  for (int i = 1; i<=n; i++){
    for (int j=1;j<=i; j++ ){
      printf("%d ", x++);
    }
    printf("\n");
  }
}

/*~/CSEN1011-8/Module-02 Programs$ ./a.out
Enter how many lines of numbers to be printed: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

Learnings: Nested for loop */