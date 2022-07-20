#include <iostream>

int main() {
    int arr[5]={10,30,20,50,60};
    int *ptr1 = &arr[0];
    int *ptr2 = ptr1 + 3;
    printf("address of ptr1 %d\n",ptr1); //960493840
    printf("address of ptr1 %d\n",&arr[1]);
    //pointer address = p + x*sizeof(pointer)
    //                = p + 3* 4(int)
    //                = 937424816 + 12
    //                = 937424828
    printf("value is %d\n",*ptr2);

    for (int i = 0; i < 5; ++i) {
        printf("address of arr[%d]=%d\n",i,&arr[i]);
    }
    printf("value is %d\n",*ptr2);

    //ptr2 is 50     937424816
    //ptr1 is 10  -  937424828
    //              12/pointersize(4)
    //              3
    int ptr3 = ptr2-ptr1;
    printf("ptr2-ptr1= %d",ptr3);
    return 0;
}
