# include <stdio.h>
int main(void) {

// Union is a colletion of heterogenous data items but menory is allocated only to the largest data item

  /* union maths_basket {
    int maths_01;
    int maths_02;
    int maths_03;
    int maths_04;
  } elective;



  printf("Enter marks for a particular elective subject: ");
  scanf("%d", &elective.maths_01);

  printf("\nThe Marks entered are: %d", elective.maths_02);
  

  //printf("\nSize of the elective union is %d\n", sizeof(elective));
  */


  union collection_basket {
    int i;
    char ch;
    float f;
  } temp;
  printf("Enter value for i: ");
  scanf("%d", &temp.i);
  printf("The value of i is %d\n", temp.i);
    printf("The value of ch is %c\n", temp.ch);
    printf("The value of f is %f\n", temp.f);
  printf("Size of the temp union is %d\n", sizeof(temp));
    
  return 0;
}


/* Observation:
01.  Memory is same for all data items in a Union
02. There is no confusion if data items are of the same type
03. If the data items of Union are different, the output is displayed wrongly when wrong references are used
*/