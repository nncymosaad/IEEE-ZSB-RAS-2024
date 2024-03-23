
/*_______________________*/
/*^_____^Problem_4^_____^*/
/*_______________________*/

#include <stdio.h>

int add(int *num1,int *num2);

int main() {
    int num1=0,num2=0;
    printf("enter the two numbers :");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int result = add(&num1,&num2);
    printf("the result of adding %d and %d is : %d\n",num1,num2,result);
    return 0;
}

int add(int *num1,int *num2){
    int result = *num1 + *num2 ;
    return result;
}