//
// Created by 18314 on 2023/2/26.
//
#include <stdio.h>

void fenjie(int a){
    int t = 0;
    do{
        int d = a % 10;
        t = 10*t +d;
        a /= 10;
    } while (a > 0);
    printf("%d\n",t);

    a = t;

    do{
        int d = a%10;
        printf("%d",d);
        if(a>=10){
            printf(" ");
        }
        a = a/10;
    } while (a > 0);
}

void fenjiePlus(int a){
    int b = a,mask = 1;
    while (b > 10){
        b /= 10;
        mask *= 10;
    }
    printf("%d\n",mask);
    do{
        int d = a/mask;
        a %= mask;
        mask /= 10;
        printf("%d",d);
    }while(a>0);

}

int main(){

    int input;
    scanf("%d",&input);

//    fenjie(input);

    fenjiePlus(input);

    return 0;
}