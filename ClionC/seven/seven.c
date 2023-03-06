//
// Created by 18314 on 2023/2/27.
//
#include <stdio.h>

int main(){
    {
        int i = 0;
        printf("Inner the i is %d",i);
    }

    printf("outer the i is %d",i);
}