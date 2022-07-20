//passByReference
#include <iostream>
void fun(int *p){       //address receive
    *p = 30;
}
void fun1(int x){       //
    x = 30;
}

int main() {
    int y = 20;
    int z = 20;
    int i = 50;

    fun(&y);        //address send
    printf("%d\n",y);

    fun1(z);
    printf("%d\n",z);//

    fun(&i);
    printf("%d",i);//

    return 0;
}
