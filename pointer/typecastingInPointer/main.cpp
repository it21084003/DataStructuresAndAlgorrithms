#include <iostream>

int main() {
    int arr[] = {10,20,30,40,50,60};
    int *ptr1 =arr;
    int *ptr2 = arr + 5;
    printf("Number of elements between two pointer are %d\n",
           (ptr2-ptr1));
    //typecast
    printf("number of bytes between two pointers are %d\n",
           (char*)ptr2-(char*)ptr1);
            //1bytes = 20/1=20
    printf("number of bytes between two pointers are %d\n",
           (float*)ptr2-(float*)ptr1);
            //1bytes = 20/4=5
    printf("number of bytes between two pointers are %d\n",
           (double *)ptr2-(double *)ptr1);
            //1bytes = 20/8=5
    //second way
    // x * sizeof(origin)/sizeof(new)
    // 5 * 4/1(char) = 20
    return 0;
}
