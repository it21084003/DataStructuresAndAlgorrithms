//pointer Swap
#include <iostream>
#include <unordered_map>
void swap(int *a,int *b){   //address
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 10;
    int b = 20;

    printf("before swap a = %d\n",a);
    printf("before swap b = %d\n",b);
    swap(&a,&b);
    printf("after swap a = %d\n",a);
    printf("after swap b = %d\n",b);

    return 0;
}

