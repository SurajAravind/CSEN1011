# include <stdio.h>
# define SIZE 5
int main(void) {
 /* int array_01[SIZE] = {11, 21, 31, 41, 51};
  printf("Address of the array = %u\n", array_01);
  printf("Address of first element in the array = %u\n", &array_01[0]);
  printf("Address of second element in the array = %u\n", &array_01[1]);
  printf("Address of third element in the array = %u\n", &array_01[2]);
  printf("Address of fourth element in the array = %u\n", &array_01[3]);
  printf("Address of fifth element in the array = %u\n", &array_01[4]);

  printf("Address of second element in the array using name of the array = %u\n", array_01 + 1);

  int * array_pointer = array_01;
  printf("Address of third element in the array using integer pointer = %u\n", array_pointer + 2); */

  int *ptr[SIZE];
  
  int salary = 10000;
  int age = 25;
  int address = 45;
  int account = 12;
  int city = 5;
  
  ptr[0]= &salary;
  ptr[1]= &age;
  ptr[2]= &address;
  ptr[3]= &account;
  ptr[4]= &city;

  printf("The values taken are ...\n");
  for (int index=0; index < SIZE; index++)
    printf("%d\t",*ptr[index]);
  printf("\n");

  printf("Address of salary = %u\nAddress of age = %u\nAddress of address = %u\nAddress of account = %u\nAddress of city = %u\n",&salary,&age, &address, &account, &city);
  printf("The contents of the pointer arrays are ...\n");
  for (int index=0; index < SIZE; index++)
    printf("%u\n",ptr[index]);
  printf("\nAddress of the array ptr is %u", ptr);
  printf("\n");
  
  return 0;
}

/* Output:
The values taken are ...
10000   25  45  12  5
Address of salary = 331912948
Address of age = 331912952
Address of address = 331912956
Address of account = 331912960
Address of city = 331912964
The contents of the pointer arrays are ...
331912948
331912952
331912956
331912960
331912964

Address of the array ptr is 331912976  */