//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

union bodySpace {
    int position;
    char ch[sizeof(int)];
};

int main(){
    typedef union bodySpace body;

    body earth;

    earth.position = 1234;

    for(int i =0; i < sizeof (int); i++){
        printf("%02hhX",earth.ch[i]);
    }

    printf("\n");
    return 0;
}