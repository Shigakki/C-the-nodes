//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>
#include <string.h>

int main(){

    char s[] = "ShichaoShichao";

    char* p = strchr(s, 'i');

    printf("第一个找到的: %s\n",p);


    p = strchr(p+1,'i');

    printf("第二个找到的: %s\n",p);


    return 0;
}