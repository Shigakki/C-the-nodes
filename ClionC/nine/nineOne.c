//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

void test1(){
    printf("test 1\n");
    int i = 0;
    int p;
//    printf("%d\n",&i);
//    printf("0x%x\n",&i);
//    printf("%p\n",&i);
//
//    printf("%lu\n",sizeof (int));
//    printf("%lu\n",sizeof(&i));
    // 地址输出是挨着的
    printf("%p\n",&i);
    printf("%p\n",&p);
}

void testArray(){
    printf("Test array\n");
    int a[10];

    printf("%p\n",&a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
}

void testPointer(){
    printf("Test pointer\n");

    int *p, q;
}

void swap(int *a, int *b){
    printf("swap\n");
    int t = *a;
    *a = *b;
    *b = t;
}

void change(int *p){
    printf("Change!\n");
    printf("value %d\n",*p);
    printf("the address %p\n",p);
    printf("the address %p\n",&p);
}

int main(){

//    test1();
//
//    testArray();
//
//    testPointer();

    int j;
    int a = 1;
    int b = 0;

    int *c ;
    int *d ;

    c = &a;
    d = &b;



    printf("test\n");
    printf("j dizhi %p\n",&j);
    printf("a dizhi %p\n",&a);
    printf("b dizhi %p\n",&b);
    printf("c dizhi %p\n",&c);
    printf("d dizhi %p\n",&d);

    printf("c zhi %p\n",c);
    printf("c zhixiangde zhi %d\n",*c);

    change(c);
    printf("c dizhi %p\n",&c);

//    swap(c,d);
//    printf("%d %d",a,b);


    return 0;
}