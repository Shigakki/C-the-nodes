//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>
#include <string.h>

int main(){

    char s1[] = "abc8";
    char s2[] = "bc";
    char s3[] = "bbc";
    char s4[] = "Abc";

    printf("the string s1 is: %s\n",s1);

    strcat(s1, s2);

    printf("after cat the string s1 is: %s\n",s1);

    return 0;
}