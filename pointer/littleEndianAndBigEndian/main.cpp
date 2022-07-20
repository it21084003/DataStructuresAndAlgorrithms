#include <iostream>
//little and Big Endian is multibyte data-type stored
//nout sone mha input te data ka first stored
int main() {

    int a = 0;
    char *x;        //pointer
    x = (char *)&a; //address of a
    x[0] = 1;       //why 1        dec
    x[1] = 2;       //why 513      dec
    x[2] = 2;       // why 131585  dec
                    //00000010,00000010,00000001
    //00000001 = 1
    //00000010 = 2
    //   2      1
    //000000100000001
    //dec 513
    printf("this value is %d",a);
    return 0;
}
