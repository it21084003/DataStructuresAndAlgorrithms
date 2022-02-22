/*
binary to Hexa-Decimal
decimal to hexa-decimal change chin yin
eg. 455\16
    28\16
    12
    index no(12) = C

MAP = binary -> decimal -> hexadecimal
*/

#include<stdio.h>


int main(){
    int binaryValue,decimalValue,hexadecimalValue,remainder,x,y;
    int hexa[100];
    int i=1;

    printf("enter binary number(1-0):");
    scanf("%d",&binaryValue);

    while(binaryValue !=0){//for loop>for binary to decimal
        remainder=binaryValue%10;//finding the remainder
        decimalValue=decimalValue+(remainder*i);
        i=i*2;
        binaryValue=binaryValue/10;
        }
        printf("%d",decimalValue);

    while(decimalValue !=0){
        hexa[x]=decimalValue%16;//remainder search
        decimalValue=decimalValue/16;
        x++;//eg 4 pyit nay
        }
        //1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
        for(y=x-1; y>=0; y--){//3 ya ag pyan - lote pee use
            if(hexa[y]>9){// if hexa[y]=10 + 55
                        //55+ ka br lo so ABCDEF pyit nay lo
                printf("%c",hexa[y]+55);
                }else{
                printf("%d",hexa[y]);
                 }
        }


    return 0;
    }
