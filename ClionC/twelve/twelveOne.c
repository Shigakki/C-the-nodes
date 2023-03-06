//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

int gAll = 12;

int f1(void);
int f2(void);
int f3(void);



int main(){
    printf("in %s the gAll=%d\n", __func__ ,gAll);
    f3();
    printf("again in %s the gAll=%d\n", __func__ ,gAll);
    return 0;
}

int f1(void){
    printf("ian %s the gAll=%d\n", __func__ ,gAll);
    gAll += 2;
    printf("again in %s the gAll=%d\n", __func__ ,gAll);
}

int f2(void){
    int gAll = 2;
    printf("in %s the gAll=%d\n", __func__ ,gAll);
    gAll += 2;
    printf("again in %s the gAll=%d\n", __func__ ,gAll);
}

int f3(void){
    int gAll = 4;
    {
        int gAll = 0;
        printf("in %s the gAll=%d\n", __func__ ,gAll);
        gAll += 2;
        printf("again in %s the gAll=%d\n", __func__ ,gAll);
    }
    printf("in %s the gAll=%d\n", __func__ ,gAll);
    gAll += 2;
    printf("again in %s the gAll=%d\n", __func__ ,gAll);
}