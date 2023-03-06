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

int mycmp(const char* s1, const char* s2){
    int cmp = 0;
//    方法1
//    while (s1[cmp] != '\0' && s2[cmp] != '\0'){
//        if (s1[cmp] != s2[cmp]){
//            break;
//        }
//        cmp++;
//    }
//    方法2
//    while (s1[cmp] == s2[cmp] && s2[cmp] != '\0'){
//        cmp++;
//    }
//    return s1[cmp] - s2[cmp];
    while (*s1 == *s2 && *s1 != '\0'){
        s1++;
        s2++;
    }

    return *s1 - *s2;
}

int main(){

    char s1[] = "abc";
    char s2[] = "abc";
    char s3[] = "bbc";
    char s4[] = "Abc";
    // 多了一个空格
    char s5[] = "abc ";

//    printf("s1 - s2 :%d\n",strcmp(s1,s2));
//    printf("s1 - s3 :%d\n",strcmp(s1,s3));
//    printf("s1 - s4 :%d\n",strcmp(s1,s4));
//    printf("a - A is:%d\n",'a' - 'A');
//    printf("s1 - s5 :%d\n",strcmp(s1,s5));

    printf("s1 - s2 :%d\n",mycmp(s1,s2));
    printf("s1 - s3 :%d\n",mycmp(s1,s3));
    printf("s1 - s4 :%d\n",mycmp(s1,s4));
    printf("a - A is:%d\n",'a' - 'A');
    printf("s1 - s5 :%d\n",mycmp(s1,s5));



//    int a[2] = {0,1};
//    printf("%d\n",*a);
//    printf("%d\n",*(a+1));


    return 0;
}