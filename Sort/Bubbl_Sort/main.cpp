#include <iostream>

void bubbleSort(int arr[], int arrSize){
    int i;
    int j;      //for index number
    int temp;   //temp is for swap data
    for (int i = 0; i < arrSize; ++i) {             // outer loop
        for (int j = 0; j < arrSize-i-1; ++j) {     //for swap data --arrSize-i-1 is last index don't loop
            if(arr[j > arr[j+1]]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < arrSize; ++i) {
        printf("%d ", arr[i]);
    }

}
int main() {
    //         {{ 7, 9}8
    //          { 7, 8, 9}6
    //          { 7, 8, 6, 9}5
    //          { 7, 8, 6, 5, 9} }
    //         {{ 7, 6, 8}5
    //          { 7, 6, 5, 8}
    //         {{ 6, 7}5
    //          { 6, 5, 7}}
    //         {{ 5, 6}
    //            5, 6, 7, 8, 9
    int arr[] = {9, 7, 8, 6, 5,};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, arrsize);
    return 0;
}
