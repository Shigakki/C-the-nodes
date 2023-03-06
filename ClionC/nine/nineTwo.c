//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

float divide(int a, int b, float *c);

int main(){

    printf("size of int is %llu\n",sizeof (int));
    int a,b;
    float c;

    printf("Please enter the a:\n");
    scanf("%d",&a);
    printf("Please enter the b:\n");
    scanf("%d",&b);

    if (divide(a,b,&c)){
        printf("the result is: %f\n",c);
    } else {
        printf("Error!\n");
    }

    return 0;
}

float divide(int a, int b, float *c){
    int ret = 1;

    if (b == 0) {
        ret = 0;
    } else {
        *c = (float ) a / b;
    }

    return ret;
}