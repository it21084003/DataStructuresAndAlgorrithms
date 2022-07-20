#include "stdio.h"

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[],int arrSize){
    for (int i = 0; i < arrSize-1; ++i) {        //first loop
        int min = i;                            //first index no is minium
        for (int j = i+1; j < arrSize; ++j) {     //second loop start index 1
            if(arr[j] < arr[min]){              //if index 1 < index 0
                min = j;
            }
        }
        swap(arr, min, i);                     //line no3 swap function call,data send
        
    }


}
int main(){
    int arr[] = {9,7,1,5,2,3,-2,8};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,arrSize);

    for (int i = 0; i < arrSize; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}