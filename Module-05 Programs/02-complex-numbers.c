# include <stdio.h>

struct complex_number {
  int real, imaginary;
};

struct complex_number addition(struct complex_number c1, struct complex_number c2) {
  struct complex_number c3;
  c3.real = c1.real + c2. real;
  c3.imaginary = c1.imaginary + c2. imaginary;
  return c3;
}

struct complex_number multiplication(struct complex_number c1, struct complex_number c2) {
  struct complex_number c3;
  c3.real = c1.real * c2. real - c1.imaginary * c2. imaginary ;
  c3.imaginary = (c1.real * c2. imaginary) + (c2.real * c1. imaginary);
  return c3;
}

void display(struct complex_number c1) {
  printf("%d + i%d\n", c1.real, c1.imaginary);
}

void menu(void){
  printf("Press 1 for Addition of complex numbers\n");
  printf("Press 2 for Multiplication of complex numbers\n");
  printf("Press 3 for exiting from the program\n");
}

int main(void) {
  struct complex_number c1, c2, c3;
  int choice;
  
  printf("Enter first complex number: \n");
  printf("Real part: ");
  scanf("%d", &c1.real);
  printf("Imnaginary part: ");
  scanf("%d", &c1.imaginary);
  
  printf("Enter second complex number: \n");
  printf("Real part: ");
  scanf("%d", &c2.real);
  printf("Imnaginary part: ");
  scanf("%d", &c2.imaginary);

  printf("First complex number is: ");
  display(c1);

  printf("Second complex number is: ");
  display(c2);

  while(1){
    menu();
    scanf("%d", &choice);

    switch(choice) {
      case 1: c3 = addition(c1, c2);
              display(c3);
              break;
      case 2: c3 = multiplication(c1, c2);
              display(c3);
              break;  
      case 3: return 0;                          
    }
  }
 
}


