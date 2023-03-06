//
// Created by 18314 on 2023/2/26.
//
#include <stdio.h>

void findMax(int a, int b){
    int max;
    int smaller;
    if (a <= b){
        smaller = a;
    }else {
        smaller = b;
    }
    printf("smaller is %d\n",smaller);
    for (int i = smaller; i >=1; i--){
        if(a%i == 0){
            if(b%i == 0){
                printf("the biggest is %d",i);
                break;
            }
        }
    }
    if(smaller == 1){
        printf("±¯£¡");
    }
}

int main(){
    int input1;
    scanf("%d",&input1);
    int input2;
    scanf("%d",&input2);

    findMax(input1, input2);
}
