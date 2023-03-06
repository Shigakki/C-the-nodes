//
// Created by 18314 on 2023/2/26.
//

// 这是程序的框架，最开始记住就行。
#include <stdio.h>

void test1(){
    int a  =  10;
    int a0 = a;
    int b = a++;
    int c = ++a0;

    printf("in test 1, a is %d, b is %d, c is %d.\n",a,b,c);
}

void test2 (){
    int a  =  10;
    int b = a++;
    int c = ++a;

    printf("in test 2, a is %d, b is %d, c is %d.\n",a,b,c);
}

void test3(){
    int i,j,k;
    i=5; j=10; k=1;
    printf("%d", k>i<j);
}
int main(){
    int n = 4;
    test1();
    test2();
    test3();
    if ( 1<=n<=10 ); //其实相当于1了，因为前面必定返回1或者0，最后的总体的比较结果肯定是1
    return 0;
}

