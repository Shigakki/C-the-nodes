//
// Created by 18314 on 2023/2/27.
//
#include <stdio.h>

/**
 * 写一个程序，输入数量不确定的[0,9]范围
内的整数，统计每一种数字出现的次数，
输入-1表⽰示结束
 */

int main(){
    const int number = 10;
    int count[number];
    for(int i = 0; i < number; i++){
        count[i] = 0;
    }

    int x;
    scanf("%d",&x);
    while ( x!= -1 ){
        if(x >= 0 && x <= 9){
            count[x]++;
        }
        scanf("%d",&x);
    }

    for (int j = 0; j < number; j++){
        printf("%d's frequency is :%d\n",j,count[j]);
    }

    return 0;
}
