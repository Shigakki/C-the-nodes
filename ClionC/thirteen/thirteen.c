//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

struct U0{
    unsigned int leading : 3;
    unsigned int FLAG1 : 1;
    unsigned int FLAG2 : 1;
    int trailing : 27;
};

void prtBin (unsigned int number){
    // 这里的意思，1u中1是数字1，u代表的意思是unsigned
    // 然后 << 代表左移31位
    // 最后就是相当于0x80 00 00 00
    unsigned int mask = 1u << 31;
    for (; mask; mask >>= 1){
        printf("%d",number & mask ?1:0);
    }
    printf("\n");
}

int main(){
//    int number;
//    scanf("%i",&number);

    struct U0 uu;
    uu.leading = 2;
    uu.FLAG1 = 0;
    uu.FLAG2 = 1;
    uu.trailing = 0;

    printf("size of the struct UO's case uu is:"
           "%llu\n", sizeof(uu));
    prtBin(*((int*)&uu));

    return 0;
}