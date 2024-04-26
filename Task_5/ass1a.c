#include <stdio.h>
/*Assignment1.a*/
typedef struct{
    unsigned int rollnumber:4;
    unsigned int age:8;
    unsigned int marks:3;
    char name[50];
    char address[50];
}student_info[15];

void printInfo(student_info student);

int main() {
    student_info student;
    printInfo(student);
    printf("size:%zu\n", sizeof(student));
    printf("1560/15 = 104 , 100 bytes for name and address\n"
           ",2 bytes for the unsigned integers with specified bit fields\n"
           "and nearly 2 bytes for padding , for each student");
}

void printInfo(student_info student){
    for(int i=0;i<15;i++){
        printf("name:%s\n",student[i].name);
        printf("address:%s\n",student[i].address);
        printf("roll number:%d\n",student[i].rollnumber);
        printf("age:%d\n",student[i].age);
        printf("marks:%d\n",student[i].marks);
    }
}
