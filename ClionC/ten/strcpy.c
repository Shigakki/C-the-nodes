//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>
#include <string.h>

// 一个关于main函数参数的小实验
//int main(int argc, char const *argv[]){
//
//    printf("o ya\n");
//    int i;
//
//    for(i = 0; i < argc; i++){
//        printf("the %d is :%s\n",i,argv[i]);
//    }
//
//    return 0;
//}

char* mycpy(char* dest, const char* source){
//    int idx = 0;
//    while (source[idx] != '\0'){
//        dest[idx]  = source[idx];
//        idx++;
//    }
//    dest[idx] = '\0';
    char* ret = dest;
    while (*source != '\0'){
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';

    return ret;
}

int main(){

    char s1[] = "abc8";
    char s2[] = "bc";
    char s3[] = "bbc";
    char s4[] = "Abc";

    printf("%s\n",s1);

    strcpy(s1, s2);
    printf("%s\n",s1);
    printf("%c\n",s1[2]);
    printf("%c\n",s1[3]);


    mycpy(s1,s2);
    printf("%s\n",s1);
    printf("%c\n",s1[2]);
    printf("%c\n",s1[3]);
    return 0;
}