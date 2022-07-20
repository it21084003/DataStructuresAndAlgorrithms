#include <iostream>
int* check(int *x, int *y){
    if(*x > *y){
//        printf("%d address is",x);
        return x;   // address
    }else{
        return y;   // address
    }
}
int main() {
    int a = 10;
    int b = 20;
    printf("address of a %d \n",&a);
    printf("address of b %d \n",&b);

    int *p;
    p = check(&a,&b);
    printf("%d is larger\n",*p);
    printf("address of a or y %d \n",&p);


    return 0;
}
