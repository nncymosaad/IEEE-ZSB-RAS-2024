#include <stdio.h>
#include <strings.h>

typedef struct{
    int day;
    int month;
    int year;
}Date[2];

typedef struct {
    char name[50];
    int age;
}info;

void compareDates(Date date);
void dates();
void infoFunc();

int main() {
    //dates();
    //infoFunc();
}
//(a - '0') * 10 + (b - '0')
/*Assignment2.a*/
void compareDates(Date date){
    if(date[0].day==date[1].day && date[0].month==date[1].month && date[0].year==date[1].year ){
        printf("Dates are equal");
    }else{
        printf("Dates are NOT equal");
    }
}
void dates(){
    Date date;
    char d[2][10];
    //accepting dates from user as strings
    printf("enter dates in this form without any spaces\n\t"
           "\'dd\\mm\\yyyy\'\n");
    printf("enter the first date:\n");
    scanf("%s",d[0]);
    printf("enter the second date:\n");
    scanf("%s",d[1]);
    for(int i=0;i<2;i++){
        date[i].day=((d[i][0]-'0')*10)+(d[i][1]-'0');
        date[i].month=((d[i][3]-'0')*10)+(d[i][4]-'0');
        date[i].year=((d[i][6]-'0')*1000)+((d[i][7]-'0')*100)+((d[i][8]-'0')*10)+(d[i][9]-'0');
    }
    //comparing dates
    compareDates(date);
}
/*Assignment2.b*/
void infoFunc(){
    info object ;
    info *ptr;
    strcpy(object.name,"tyty");
    object.age=21;
    ptr = &object;
    printf("name:%s\n",ptr->name);
    printf("age:%d\n",ptr->age);
}