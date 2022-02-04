# include <stdio.h>

struct employee {
  struct name {
    char first[10];
    char middle[10];
    char last[10];
  }n;
  int salary;
  char department[10];
}e1;

int main(void){

  printf("Enter the first name of the employee:");
  scanf("%s", e1.n.first);

  printf("Enter the middle name of the employee:");
  scanf("%s", e1.n.middle);

  printf("Enter the last name of the employee:");
  scanf("%s", e1.n.last);
  
  printf("Enter the salary of the employee:");
  scanf("%d", &e1.salary);

  printf("Enter the department of the employee:");
  scanf("%s", e1.department);


  printf("The details of the employee are  Name = %s %s %s\n Salary = %d\n , Department = %s\n", e1.n.first, e1.n.middle, e1.n.last, e1.salary, e1.department);

  return 0;
}