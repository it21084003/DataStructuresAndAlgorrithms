#include <iostream>

void fun(int arr[]){//
//    int i = 0;
//    printf("size of first index arr[] %d\n",sizeof(arr));
//                  // 2       /  2
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    printf("arrsize is %d\n",arrSize);
    for (int i = 0; i < arrSize; ++i) {
        printf("the value is %d\n",arr[i]);
    }
}
int main() {


    int arr[4] = {10,20,30,40};
    fun(arr);

    size_t sz = sizeof(arr)/sizeof(arr[0]);
    printf("size of first index arr[] %d\n",sz);

    return 0;
}
