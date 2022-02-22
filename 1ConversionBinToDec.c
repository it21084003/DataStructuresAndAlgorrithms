/*
Binary to decimal

formula(decimal = (decimal*2)+number)
*/

#include<stdio.h>
#define Antt 30
int binTodec(char char_bin[]);

int main(){
    int f_decimal=0;
    char ch_bin[Antt];
    printf("Enter Binary (0-1)");
    gets(ch_bin);
    f_decimal=binTodec(ch_bin);

    if(f_decimal == -1){
        printf("User entered number is invalid");
    }else{
        printf("final decimal number is:%d",f_decimal);
        }

    return 0;
    }

int binTodec(char char_bin[]){
    int i=0;
    int number=0;
    int decimal=0;
    while(char_bin[i] != '\0'){//array twy asone my \shi tl
                                //char to integer lo chin yin 48-
        number = char_bin[i]-48; //binary no ya pee 1 0r 0

        if(number !=0 && number != 1)// other no input lote ma ya aung
            return -1;

        decimal = (decimal*2)+number;


        i++;


        }
    return decimal;

    }
