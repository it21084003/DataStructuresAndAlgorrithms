#include "stdio.h"

void insertionSort(int arr[], int arrSize){
    int i;  //for outer loop
    int j;  //for swapping data
    int temp;   //to stored data tempory

    for (int i = 1; i < arrSize; ++i) {         //outer loop  start 1
        j = i;
        while (j > 0 && arr[j-1] > arr[j]){     //inner loop
            temp = arr[j];
            arr[j]  =arr[j-1];
            arr[j-1]  =temp;
            j--;                                //j ko -- lote pp loop

        }
    }
    printf("Sorted Data: ");
    for (int i = 0; i < arrSize; ++i) {
        printf("%d ", i);
    }
}

int main(){
    //            { 7, 9}1
    //            { 7, 1, 9
    //              1, 7, 9]5
    //            { 1, 7, 5, 9
    //              1, 5, 7, 9]2
    //            { 1, 5, 7, 2, 9
    //              1, 5, 2, 7, 9
    //              1, 2, 5, 7, 9}3
    //            { 1, 2, 5, 7, 3, 9
    //              1, 2, 5, 3, 7, 9
    //              1, 2, 3, 5, 7, 9}-2
    //            { 1, 2, 3, 5, 7, -2, 9
    //              1, 2, 3, 5, -2, 7, 9
    //              1, 2, 3, -2, 5, 7, 9
    //              1, 2, -2, 3, 5, 7, 9
    //              1, -2, 2, 3, 5, 7, 9
    //              -2, 1, 2, 3, 5, 7, 9}8
    //            { -2, 1, 2, 3, 5, 7, 8, 9


    int arr[] = {9,7,1,5,2,3,-2,8};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,arrSize);
    return 0;
}