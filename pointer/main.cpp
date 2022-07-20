//pointeer
// operand 1 htae nae a lote lote  eg.a var
// & (ampersand)  uniary operator
// * (sterisk)    uniary operator
// binary operator is
// operand 2 shi mha a lote lote eg.a/b

//pointer is address of another variable
//int a = 10;
//int *p = &a;  eg. a yae address
#include <iostream>

int main() {
    int a = 10;
    int *p; //pointer
    p = &a; //address(10) of a

    int b = 20;
    int *sp;
    sp = &b;

    printf("address of a is %d\n",p);     //address
    printf("address of a is %d\n",*p);    //value

    printf("address of a is %d\n",sp);     //address
    printf("address of a is %d",*sp);    //value

    return 0;
}
