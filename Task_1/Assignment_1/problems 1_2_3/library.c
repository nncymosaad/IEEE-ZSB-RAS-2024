

#include <stdio.h>
#include <stdlib.h>

int *receiveArr(int *size); //receiving array of numbers from the user
int *countNums(int size,int array[size]); //returns count array for the elements
int findMax(int size,int array []); //calculating maximum number of the array
void printDup (int size,int *array); //calculating number of duplicates and printing them
void printUniques(int size,int *array); //printing unique numbers
void printFreq (int size,int *array); //printing frequency of each number in the array


int gcount_size =0;


int main() {
    int array_size =0;
    int* array = receiveArr(&array_size);
    printDup( array_size, array);
    printUniques(array_size, array);
    printFreq (array_size, array);
    free(array);

    return 0;
}

/*_______________________*/
/*^___^com functions^___^*/
/*_______________________*/
int *receiveArr(int *size){
    int number;
    printf("enter the array size:");
    scanf("%d",&(*size));
    int *array = (int*)malloc(sizeof (int) * (*size));
    if (*size <= 0) { // ensuring not to allocate memory for an array with a size of 0 or a negative size
        printf("Invalid array size !! \n");
        exit(EXIT_FAILURE);
    }
    printf("enter the array elements:");
    for(int i=0;i<*size;i++) {
        scanf("%d",&number);
        array[i] = number;
    }
    return array;
}

int *countNums(int size,int array[size]){
    gcount_size = findMax(size,array)+1;
    /*not necessarily to do an exception for the count size here :)*/
    int *countarr = malloc(sizeof (int)* gcount_size);
    for (int i = 0; i < gcount_size; i++) {
        countarr[i] = 0;
    }
    for(int i=0;i<size;i++){
        countarr[array[i]]++;
    }
    return countarr;
}

int findMax(int size,int array []){
    int max=0;
    for(int i=0;i<size;i++){
        if(array[i]>max)
            max=array[i];
    }
    return max;
}
/*_______________________*/
/*^_____^Problem_1^_____^*/
/*_______________________*/

void printDup (int size,int *array){
    int *resultcount = countNums(size ,array);
    int count=0;
    for(int i=0;i<gcount_size;i++){
        if(resultcount[i]>1)
            count++;
    }
    printf("The total number of Duplicate elements in the array is: %d\n",count);
    free(resultcount);
}

/*_______________________*/
/*^_____^Problem_2^_____^*/
/*_______________________*/

void printUniques(int size,int *array){
    int *resultcount = countNums(size ,array);
    int arr_unique[gcount_size];
    int j=0;
    for(int i=0;i<gcount_size;i++){
        if(resultcount[i]==1){
            arr_unique[j]=i;
            j++;
        }
    }
    printf("The unique elements are :\n");
    for(int i=0;i<j;i++){
        printf("%d\n",arr_unique[i]);
    }
    free(resultcount);
}

/*_______________________*/
/*^_____^Problem_3^_____^*/
/*_______________________*/

void printFreq (int size,int *array){
    int *resultcount = countNums(size ,array);
    for(int i=0;i<gcount_size;i++){
        if(resultcount[i]>0)
            printf("The frequency of number %d is: %d\n",i,resultcount[i]);
    }
    free(resultcount);
}