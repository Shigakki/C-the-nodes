//
// Created by 18314 on 2023/2/26.
//
#include <stdio.h>

void getBits(int a){
    int bit = 0;
    do{
        a /= 10;
        bit++;
    } while (a>0);

    printf("the bits used in the function is : %d\n",bit);
}

int main() {
    int input;
    int bit = 1;

    printf("Please enter the number to bo counted:");
    scanf(" %d", &input);

    getBits(input);
    while (input /= 10){
        bit++;
    }
    printf("the bit is :"
           "%d\n",bit);

    return 0;
}