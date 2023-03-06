//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>
int gAll = 12;

int f(void);



int main(){
//    printf("in %s the gAll=%d\n", __func__ ,gAll);
//    printf("again in %s the gAll=%d\n", __func__ ,gAll);
//    f();
//    f();
//    f();


    return 0;
}

int f(void){
    static int all = 2;
    int k = 0;
    printf("\nnow we are in the %s\n", __func__ );
    printf("the gAll's address is        %p\n",&gAll);
    printf("and the all's address is     %p\n",&all);
    printf("and the local k's address is %p\n",&k);

    printf("ian %s the gAll=%d\n", __func__ ,all);
    all += 2;
    printf("again in %s the gAll=%d\n\n", __func__ ,all);
}