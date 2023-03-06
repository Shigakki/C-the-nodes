//
// Created by Shichao on 2023/2/25.
//
// 这是程序的框架，最开始记住就行。
#include <stdio.h>
int main(){
    // “”里面的表示是字符串，而\n是表示另起一行
    printf ("Hello World!\n");

    printf("23 + 43 =  %d\n", 23 + 43);

    int price;
    printf("please enter the amount (unit in 'yuan'): ");
    scanf("%d", &price);

    int change = 100 - price;
    printf("the rest money available is: %d", change);

    return 0;
}