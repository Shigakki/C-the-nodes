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

int myLength(const char *s){

    int length;

    const char *a = s;

    for (length = 0; *a != '0'; length++){
        a++;
    }

    return length;
}

int main(){

    char line[] = "Hello";
    printf("strlen = %llu\n",strlen(line) );
    printf("sizeof = %llu\n",sizeof(line) );
    myLength(line);
    printf("mylen  = %llu\n",strlen(line) );

    return 0;
}