//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

void testArrayPointer(){
    int a[10] = {1, 2, 5, };
    int b[10] = {7, 8, 3, };
    int *p;

    p = a;

    printf("a[0] is :%d\n",a[0]);
    printf("p's value is :%d\n",*p);
    printf("a's another form value is :%d\n",*a);
    printf("p's another form value is :%d\n",p[0]);
    printf("a's address is :%p\n",a);
    printf("p's value is :\t%p\n",p);
}


int main(){

//    testArrayPointer();

//    int a;
//    int b;
//    const int *p;
//    p = &a;
//    int* const q = &b;
//
//    a = 1;
//    printf("a1 is %d\n",*p);
//    a =2;
//    printf("a2 is %d\n",*p);
//
//    int c = 2;
//    p = &c;
//    printf("c is %d\n",*p);
//
//    *q =2;
//    printf("q is %d\n",*q);

//    不同类型指针不能瞎用
//    char * a;
//    char b;
//    b = 0;
//    int * c;
//
//    a = &b;
//
//
//
//    printf("first a %c\n",*a);
//
//    c = a;
//    *c = 0;
//    printf("second a %c\n",*a);
//    printf("just c %d\n",*c);

    return 0;
}