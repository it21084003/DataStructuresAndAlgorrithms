//pointerArithmetic
#include <iostream>

int main() {
    int *p1;
    int *p2;
    long long int p3;
    int a=20;
    int b=30;
    int c=0;

    p1 = &a;        //address of a
    p2 = &b;
    printf("address of p1 or a %d\n", p1);
    printf("address of p2 or b %d\n", p2);

    c = *p1 + *p2;      // *par lol value
    printf("*p1 + *p2 = %d\n", c);

    p3 = (p1-p2);
    printf("p1-p2 = %d\n",p3);

    p1++;
    printf("p1++ = %d\n",p1);

    p2--;
    printf("p2-- = %d\n",p2);



    return 0;
}
