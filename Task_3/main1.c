#include <stdio.h>
#include <stdlib.h>
//#include <errno.h>
#include <string.h>

//extern int errno;

float function (float x, float y){
    float result = 0 ;
    int choice =0 ;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            result = x + y;
            printf("\nThe result of Addition is : ");
            break;
        case 2:
            result = x - y;
            printf("\nThe result of Subtraction is : ");
            break;
        case 3:
            result = x * y;
            printf("\nThe result of Multiplication is : ");
            break;
        case 4:
            if(y == 0){
                fprintf(stderr,"Division By zero !!");
                exit(EXIT_FAILURE);
            }else{
                result = x / y;
                printf("\nThe result of Division is : ");
            }
            break;
        default:
            printf("Not A Valid Choice!!");
            exit(EXIT_FAILURE);
    }
    return result;
}

int main() {
    float a , b , result ;
    float(*operation)(float,float) = function;
    printf("\nEnter the first number :");
    scanf("%f",&a);
    printf("\nEnter the second number :");
    scanf("%f",&b);
    result = operation(a,b);
    printf("%.2f",result);
}
