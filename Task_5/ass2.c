#include <stdio.h>
#include <strings.h>
/*Assignment2*/
enum operation {add,subtract,multiply,divide,and,or,not};

void calculator(int x,int y,enum operation op);
void calc();

int main() {//remove /**/ to run the while loop
    /*
    while (1){
        calc();
    }
     */
    printf("%d", sizeof(enum operation));
    //the size of enum is constant and does not change by increasing members
    //it is typically 4bytes because enum store int values
    //even if we assign to a member of the enum characters
    //it will store the corresponding ascii value of it
}

void calculator(int x,int y,enum operation op){
    int result=0;
    switch (op) {
        case add:
            result=x+y;
            break;
        case subtract:
            result=x-y;
            break;
        case multiply:
            result=x*y;
            break;
        case divide:
            result=x/y;
            break;
        case and:
            result=x&&y;
            break;
        case or:
            result=x||y;
            break;
        case not:
            result=!x;
            break;
        default://this is already handled in calc function
            printf("not a valid operation!!");
    }
    printf("the result is = %d\n",result);
}
void calc(){
    int x,y;
    char op;
    enum operation opselected;
    printf("enter the first number:\n");
    scanf("%d",&x);
    printf("enter the second number:\n");
    scanf("%d",&y);
    while(1){
        printf("choose the operation you want\n"
               "{+,-,*,/,|,&}\n"
               ">Take care to write it correctly<");
        scanf(" %c",&op);
        if(op == '+'){
            opselected = add;
        }else if(op == '-'){
            opselected = subtract;
        }else if(op == '*'){
            opselected = multiply;
        }else if(op == '/'){
            opselected = divide;
        }else if(op == '&'){
            opselected = and;
        }else if(op == '|'){
            opselected = or;
        }else if(op == '!'){
            opselected = not;
        }else{
            printf("not a valid operation!!\n");
            continue;
        }
        break;
    }
    calculator(x, y, opselected);
}
/*
 **/