#include <stdio.h>

typedef struct{
    int real;
    int imaginary;
}complex;

typedef unsigned int usint;
typedef signed int sint;
typedef unsigned short ussh;
typedef signed short ssh;
typedef unsigned long usl;
typedef signed long sl;
typedef unsigned char usc;
typedef signed char sc;
typedef float f;
typedef double d;

void addComplex(complex x,complex y);
void cmplx();

/*Assignment1.c*/
#define printP()\
do{             \
       printf("the following data sizes is in Bits:");         \
       printf("%d\n", sizeof(usint)*8); \
       printf("%d\n", sizeof(sint)*8); \
       printf("%d\n", sizeof(ussh)*8); \
       printf("%d\n", sizeof(ssh)*8); \
       printf("%d\n", sizeof(usl)*8); \
       printf("%d\n", sizeof(sl)*8); \
       printf("%d\n", sizeof(usc)*8); \
       printf("%d\n", sizeof(sc)*8); \
       printf("%d\n", sizeof(f)*8); \
       printf("%d\n", sizeof(d)*8);\
}while(0)

void main() {
    //cmplx();
    //printP();
}
/*Assignment1.b*/
void addComplex(complex x,complex y){
    int res_real = x.real + y.real;
    int res_imag = x.imaginary + y.imaginary;
    printf("the result = %d + i%d\n",res_real,res_imag);
}
void cmplx(){
    complex x={3,4},y={5,6};
    addComplex(x,y);
}
