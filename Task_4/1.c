#include <stdio.h>
#include <strings.h>

typedef struct{
    char name[50];
    char address[100];
    int rollnum;
    int age;
    int marks;
}student_info[15];



int printInfo( student_info student);


int main() {
    student_info student;

    for(int i=0;i<15;i++){    /*Assignment1.a*/
        printf("Name:%s\n",student[i].name);
        printf("address:%s\n",student[i].address);
        printf("Roll Number:%d\n",student[i].rollnum);
        printf("Age:%d\n",student[i].age);
        printf("Marks:%d\n",student[i].marks);
    }

    //printInfo(student);
}
/*Assignment1.b*/
int printInfo( student_info student){//printing infromation by passing struct and return number of students with marks <12
    int counter=0;
    for(int i=0;i<15;i++){
        printf("Name:%s\n",student[i].name);
        printf("address:%s\n",student[i].address);
        printf("Roll Number:%d\n",student[i].rollnum);
        printf("Age:%d\n",student[i].age);
        printf("Marks:%d\n",student[i].marks);
        if(student[i].marks<12){
            counter++;
        }
    }
    return counter;
}
