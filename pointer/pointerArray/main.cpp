//pointer Array
#include <iostream>

int main() {
    int arr[5]={1,2,3,4,5};
    int *p;
    p = arr;
    // int *p = arr; second write method
    int *p2;
    p2 = &arr[0];   //address of arr 0


    printf("address of array %d\n", p);
    printf("address of array[0] %d\n", p2);
    //arr yae address ka arr[0]yae address nae the same

    for (int i = 0; i < 5; ++i) {
        printf("arr [%d] address if %d\n",i,&arr[i]);
        //address 1ku nae 1ku 4char tal
        printf("size of int byte %d",sizeof(int));
    }

    return 0;
}
