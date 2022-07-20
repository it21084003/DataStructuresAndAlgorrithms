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
    int *pa;
    int var = 10;

    printf("address of var is %d\n", &var);     //address
    printf("value of var is %d\n", var);    //value

    pa = &var;
    printf("address of pointer pa %d\n", pa);
    printf("value of pointer pa %d\n", *pa);

    var = 20;
    printf("address of pa is %d\n", pa);     //address
    printf("value of pa is %d\n", *pa);    //value

//    pa = 30; error
    *pa = 30;
    printf("address of var %d\n", &var);
    printf("vlaue of var %d \n", var);


    return 0;
}
