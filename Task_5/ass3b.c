#include <stdio.h>

#define add(num1,num2,result) \
do{                    \
    result = num1+num2;       \
    printf("Result of addition: %d\n", result);\
}while(0)
#define subtract(num1,num2,result) \
do{                    \
    result = num1-num2;            \
    printf("Result of subtraction: %d\n", result);\
}while(0)

#define Addition

int main() {
    int num1,num2,result=0;
    printf("enter the two numbers:");
    scanf("%d",&num1);
    scanf("%d",&num2);
#ifdef Addition
    add(num1,num2,result);
#else
    subtract(num1,num2,result);
#endif
}
