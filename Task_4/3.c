#include <stdio.h>
#include <strings.h>



typedef struct {
    int id;
    char name[50];
    char class_id;
}test;

typedef struct {
    char name[50];
    int id;
    char class_id;
}testch;

int main() {
    test test1;
    testch test2;
    printf("size of struct :%d\n", sizeof(test1));
    printf("size of struct after changes:%d\n", sizeof(test2));
    //there is a change in the size due to PADDING
    //EXPLAINATION::
    // when creating structures , the compiler may add padding bytes between members
    // to ensure that each member is properly aligned in the memory
    // It is possible to minimize padding
    // if the fields are arranged in such a way that fields of the same size are grouped together
}
