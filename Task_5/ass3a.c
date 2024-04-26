#include <stdio.h>

void swap(int *x,int *y);
void sortAsc();
int partitionA(int arr[],int lb,int ub);
void quickSortA(int arr[],int lb,int ub);
void sortDesc();
int partitionD(int arr[],int lb,int ub);
void quickSortD(int arr[],int lb,int ub);

#define Ascending_Order

int main() {
#ifdef Ascending_Order
    sortAsc();
#else
    sortDesc();
#endif
}

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partitionA(int arr[],int lb,int ub){
   int pivot = arr[lb];
   int start =lb, end =ub;
   while(start<end){
       while(arr[start]<=pivot){
           start++;
       }
       while(arr[end]>pivot){
           end--;
       }
       if(start<end){
           swap(&arr[start],&arr[end]);
       }
   }
   swap(&arr[end],&arr[lb]);
    return end;
}
void quickSortA(int arr[],int lb,int ub){
    int loc=0;
    if(lb<ub){
       loc= partitionA(arr,lb,ub);
        quickSortA(arr,lb,loc-1);
        quickSortA(arr,loc+1,ub);
    }
}
void sortAsc(){ //sort numbers in ascending order
    int arr[10];
    printf("enter the numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    quickSortA(arr,0,9);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}
int partitionD(int arr[],int lb,int ub){
    int pivot = arr[lb];
    int start =lb, end =ub;
    while(start<end){
        while(arr[start]>=pivot){
            start++;
        }
        while(arr[end]<pivot){
            end--;
        }
        if(start<end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[end],&arr[lb]);
    return end;
}
void quickSortD(int arr[],int lb,int ub){
    int loc=0;
    if(lb<ub){
        loc= partitionD(arr,lb,ub);
        quickSortD(arr,lb,loc-1);
        quickSortD(arr,loc+1,ub);
    }
}
void sortDesc(){//sort numbers in descending order
    int arr[10];
    printf("enter the numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    quickSortD(arr,0,9);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}
