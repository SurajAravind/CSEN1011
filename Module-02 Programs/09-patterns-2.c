// Print patterns using alphabets
# include <stdio.h>
int main() {
  int n;
  char ch = 'A';
  printf("Enter how many lines of alphabets to be printed: ");
  scanf("%d", &n);
  for (int i = 1; i<=n; i++){
    for (int j=1;j<=i; j++ ){
      printf("%c", ch);
    }
    ++ch;
    printf("\n");
  }
}

/*~/CSEN1011-8/Module-02 Programs$ ./a.out
Enter how many lines of alphabets to be printed: 5
A
BB
CCC
DDDD
EEEEE

Learnings: Nested for loop */