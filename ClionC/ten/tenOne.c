//
// Created by 18314 on 2023/3/3.
//
#include <stdio.h>
#include <string.h>

void testAddress(){
    int i = 0;
    char s0[] = "He";
    char s1[] = "He";
    char *s = "Hello, World.";
    char *s2= "Hello, World.";

    printf("i  is %p\n",&i);
    printf("s0 is %p\n",s0);
    printf("s1 is %p\n",s1);
    printf("s  is %p\n",s);
    printf("s2 is %p\n",s2);


}

int main(){
    testAddress();

    return 0;
}