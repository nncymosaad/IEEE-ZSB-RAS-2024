#include <stdio.h>
#include <stdlib.h>

#define operation(x,y,z,result)  \
  do{                      \
      switch (z){ \
          case 1:\
               *(result) = x + y;\
               printf("\nThe result of Addition is : %.2f",*(result));\
               break;\
          case 2:\
              *(result) = x - y;\
              printf("\nThe result of Subtraction is : %.2f",*(result));\
              break;\
          case 3:\
              *(result) = x * y;\
              printf("\nThe result of Multiplication is : %.2f",*(result));\
              break;\
          case 4:\
              if(y == 0){\
                  fprintf(stderr,"Division By zero !!");\
                  exit(EXIT_FAILURE);\
              }else{\
                  *(result) = x / y;\
                  printf("\nThe result of Division is : %.2f",*(result));\
              }\
              break;\
          default:\
              printf("Not A Valid Choice!!");\
              exit(EXIT_FAILURE);  \
            }                    \
            }\
  while(0)



int main() {
    int choice =0 ;
    float a , b , result ;
    printf("\nEnter the first number :");
    scanf("%f",&a);
    printf("\nEnter the second number :");
    scanf("%f",&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    operation(a,b,choice,&result);
}