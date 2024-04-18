#include <stdio.h>

void pointers1();
void pointers2();
void pIncrement();
void printarray();
int increment (int x){
    int inc = ++x;
    return inc;
}
int main() {
    //pointers1();
    //pointers2();
    //pIncrement();
    //printarray();
}
/*^__^Assignment1^__^*/
void pointers1(){
    int *p1;
    char *p2;
    long *p3;
    printf("Before:\n");
    printf("p1 : %zu\n",p1);
    printf("p2 : %zu\n",p2);
    printf("p3 : %zu\n\n",p3);
    printf("After:\n");
    printf("p1++ : %zu\n",p1++);
    printf("p2++ : %zu\n",p2++);
    printf("p3++ : %zu\n",p3++);
    printf("No change in size appear here because the incrementation is postfix"
           "and the values of pointers addresses were already assigned \n\n");
    printf("Actual Incrementation:\n");
    printf("p1++ : %zu [size of int is 4Bytes]\n",p1);
    printf("p2++ : %zu [size of char is 1Byte]\n",p2);
    printf("p3++ : %zu [size of long is 4Bytes]\n",p3);
    printf("the address for each is incremented by one place in memory multiplied by "
           "the size of the data type of the pointer \n\n");
}
void pointers2(){
    int hexval = 0xABCDEF;
    int *ptr = &hexval;
    printf("what the pointer points to :\n");
    printf("*ptr : %x\n\n",*(ptr));
    ptr = &hexval;
    printf("the same value of hexvalue will be printed due to postfix operation:\n");
    printf("*ptr++ : %x\n",*ptr++);
    printf("*ptr++ [value of data in the Actual incremented address] : %x\n\n",*(ptr));
    ptr = &hexval;
    printf("what the next place to the pointer contains[after increasing the hexvalue address by 4 Bytes"
           "which is the actual size of int in regardless of what it is storing] :\n");
    printf("(the same as before)\n");
    printf("*++ptr : %x\n\n",*++ptr);
    ptr = &hexval;
    printf("increment the value (value of data in the address) that pointer points to by 1 :\n");
    printf("++*ptr : %x\n\n",++*ptr);
}
/*^__^Assignment2^__^*/
void pIncrement(){ //increment number using pointer to function
    int value=0;
    printf("enter the value to be incremented :\n");
    scanf("%d",&value);
    int (*pointerinc) (int)=increment;
    printf("%d\n",pointerinc(value));
}
void printarray(){ //print array elements using pointer to the array
    int array[6] = {1,2,3,4,5,6};
    int *pointer = &array[0];
    for(int i=0;i<6;i++){
        printf("%d\t",*pointer);
        pointer++;
    }
}
